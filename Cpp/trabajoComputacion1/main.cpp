// #include <algorithm>
// #include <array>
// using std::array;
// using std::cin;
// using std::cout;
// using std::string;
// using std::vector;

#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// #define MAX 20
using namespace std;

void bienvenida(string &numDigitos) {
  // Mesnaje de bienvenida...
  cout << "\nEl numero tiene " << numDigitos.length() << " digitos\n";
}

void showHidden(const string &hidden) {
  // muestra en pantalla los digitos ocultos por un '_'
  cout << "\t\t\t\t" << hidden << "\n";
}

// void positions(){}

void showEquivocado(const vector<char> &equivocado) {
  // esta funcion guarda los intentos erroneos y los muestra en pantalla
  // para que el usuario no los vuelva a poner
  cout << "Equivocado: ";
  for (int i = 0; i < equivocado.size(); i++) {
    cout << equivocado[i] << " ";
  }
  cout << "\n";
}

bool digitoUnico(const string &num) {
  // Chequea que el numero tenga al menos 4 digitos distintos
  std::unordered_set<char> digitos;
  for (char digito : num) {
    digitos.insert(digito);
  }
  return digitos.size() >= 4;
}

bool noRepite(const string &num) {
  // chequea si el numero contiene un digito que se repita 4 veces consecutivas
  int count = 1;
  char digitAnterior = num[0];
  for (int i = 1; i < num.length(); i++) {
    if (num[i] == digitAnterior) {
      count++;
      if (count > 4) {
        return false;
      }
    } else {
      count = 1;
      digitAnterior = num[i];
    }
  }
  return true;
}

string eligeNum(const string &lastNum) {
  // Aqui elige el numero basado en las condiciones requeridas
  std::ifstream file("num.txt");
  string num;
  while (file >> num) {
    if (num != lastNum && num.length() >= 10 && num.length() <= 20 &&
        digitoUnico(num) && noRepite(num)) {
      return num;
    }
  }
  return ""; // no hubo numero valido.
}

char getGuess() {
  cout << "Ingrese digito: ";
  char guess;
  cin >> guess;
  return guess;
}

bool isValidInput(char guess) { return isdigit(guess); }

char validarInput() {
  char guess;
  cin >> guess;
  while (!isValidInput(guess)) {
    cout << "Valor invalido, por favor ingrese un digito: ";
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin >> guess;
  }
  return guess;
}

bool updateHidden(const string &num, string &hidden, vector<char> &equivocado,
                  int &Errores, char guess) {
  bool correctGuess = false;
  for (int i = 0; i < num.length(); i++) {
    if (num[i] == guess) {
      hidden[i] = guess;
      correctGuess = true;
    }
  }
  if (!correctGuess) {
    equivocado.push_back(guess);
    Errores++;
  }
  return correctGuess;
}

void showGameStatus(const string &hidden, const vector<char> &equivocado,
                    int Errores) {
  showHidden(hidden);
  showEquivocado(equivocado);
  cout << "Intentos restantes: " << 5 - Errores << "\n";
}

void ultimoIntento(int posibilidades, const string &hidden) {
  // Comenzar a dar pistas cuando quedan pocos intentos
  bool allEven, allOdd;

  if (posibilidades <= 3) {
    // Shit happens here
    for (char digit : hidden) {
      if (digit != '_') {
        int num = digit - '0';
        cout << num << "\n";
      }
    }
  }
}

void showCorrectMessage() {
  cout << "Correcto!\n"
       << "Ingrese un digito: ";
}

void showWrongMessage() {
  cout << "Digito equivocado!\n"
       << "Ingrese un digito: ";
}

void showWinner() { cout << "Ganaste!\n"; }

void showLooser(const string &num) {
  cout << "No mas intentos! El numero era: " << num << "\n";
}

char jugarOtraVez() {
  char jugar;
  cout << "Jugar otra vez (y/n)?: ";
  cin >> jugar;
  return jugar;
}

void showBye() { cout << "Gracias por jugar! \n"; }

void playGame() {
  // Inicia el juego con el numero que cumple todos los requisitos.
  // tambien asegura que el numero no haya sido elegido anteriormente
  string lastNum;
  char jugar = 'y';
  while (jugar == 'y') { // Comienza loop para jugar
    string num = eligeNum(lastNum);
    if (num.empty()) {
      cout << "No hay mas numeros para jugar";
      break;
    }

    lastNum = num;
    bienvenida(num);
    string hidden(num.length(), '_');
    vector<char> equivocado;
    int numErrores = 0;
    showGameStatus(hidden, equivocado, numErrores);
    cout << "Ingrese un digito: ";

    while (hidden.find('_') != string::npos && numErrores < 5) {
      char guess = validarInput();
      bool correctGuess =
          updateHidden(num, hidden, equivocado, numErrores, guess);

      showGameStatus(hidden, equivocado, numErrores);

      if (correctGuess) {
        showCorrectMessage();
      } else {
        showWrongMessage();
      }
      ultimoIntento(5 - numErrores, hidden);
    }

    if (hidden.find('_') == string::npos) {
      showWinner();
    } else {
      showLooser(num);
    }
    jugar = jugarOtraVez();
  }
  showBye();
}

int main() {
  cout << "Bienvenido al juego ql \n";
  playGame();
  return 0;
}
