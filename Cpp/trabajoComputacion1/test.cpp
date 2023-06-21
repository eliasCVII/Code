#include <algorithm>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <set>
#include <string>
#include <unordered_set>
#include <vector>

void welcome(std::string &num) {
  std::cout << "welcome! \n";
  std::cout << "the number has " << num.length() << " digits\n";
}

void byeMessage() { std::cout << "thanks for playing! "; }

// looks like this one is useless
char getGuess() {
  std::cout << "Ingrese un digito: ";
  char guess;
  std::cin >> guess;
  return guess;
}

void printCorrect() {
  std::cout << "right guess! \n";
  getGuess();
}

void printWrong() {
  std::cout << "wrong guess! \n";
  getGuess();
}

void printHidden(const std::string &hidden) {
  std::cout << "\t\t\t\t" << hidden << "\n";
}

void printWrong(const std::set<char> &guessWrong) {
  std::cout << "wrong";
  for (char c : guessWrong) {
    std::cout << c << " ";
  }
  std::cout << "\n";
}

void gameStatus(const std::string &hidden, const std::set<char> &wrong,
                int fails) {
  printHidden(hidden);
  printWrong(wrong);
  std::cout << "attempts left: " << 5 - fails << "\n";
}

char jugarOtraVez() {
  char jugar;
  std::cout << "play again (y/n): ";
  std::cin >> jugar;
  return jugar;
}

bool uniqueDigit(const std::string &num) {
  std::unordered_set<char> digits;
  for (char c : num) {
    digits.insert(c);
  }
  return digits.size() >= 4;
}

bool noRepeatingDigit(const std::string &num) {
  int count = 1;
  char previousDigit = num[0];
  for (int i = 1; i < num.length(); i++) {
    if (num[i] == previousDigit) {
      count++;
      if (count > 4) {
        return false;
      }
    } else {
      count = 1;
      previousDigit = num[i];
    }
  }
  return true;
}

bool checkRight(const std::string &num, std::string &hidden,
                std::set<char> &guessWrong, char guess,
                std::map<char, int> gRight) {
  bool correctGuess = false;
  for (int i = 0; i < num.length(); i++) {
    if (num[i] == guess) {
      hidden[i] = guess;
      gRight[guess]++;
      correctGuess = true;
    }
  }
  if (!correctGuess) {
  }
  return correctGuess;
}

std::string pickNum(const std::string &lastNum) {
  std::ifstream file("num.txt");
  std::string num;
  while (file >> num) {
    if (num != lastNum && num.length() >= 10 && num.length() <= 20 &&
        uniqueDigit(num) && noRepeatingDigit(num)) {
      return num;
    }
  }
  return "";
}

bool isValidInput(char guess) { return isdigit(guess); }

char validateInput() {
  char guess;
  std::cin >> guess;
  while (!isValidInput(guess)) {
    std::cout << "non valid input...";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> guess;
  }
  return guess;
}

bool updateHiddenNumbers(const std::string &num, std::string &hidden,
                         std::set<char> &guessWrong, int &fails, char guess) {
  bool correctGuess = false;
  for (int i = 0; i < num.length(); i++) {
    if (num[i] == guess) {
      hidden[i] = guess;
      correctGuess = true;
    }
  }
  if (!correctGuess) {
    guessWrong.insert(guess);
    fails++;
  }
  return correctGuess;
}

void lastAttempts(int fails, const std::string &hidden) {
  // work with the remainings here
}

void printWinOrLost(const std::string &hidden, const std::string num) {
  if (hidden.find('_') == std::string::npos) {
    std::cout << "you win! \n";
  } else {
    std::cout << "you lost! :( \n";
  }
}

void play() {
  std::string lastNum;
  char jugar = 'y';
  while (jugar == 'y') {
    std::string num = pickNum(lastNum);
    if (num.empty()) {
      std::cout << "you played all the numbers\n";
      break;
    }

    lastNum = num;
    welcome(num);

    std::map<char, int> digits;

    for (char c : num) {
      digits[c]++;
      // digits = {0,1,2,3,7,8}
    }

    std::map<char, int> guessRemaining(digits);
    // remain = {0,1,2,3,7,8}

    std::set<char> guessWrong;

    // Remaining = num
    std::string hidden(num.length(), '_');

    std::string guesses = "17345";

    for (char c : guesses) {
      auto it = guessRemaining.find(c);
      if (it != guessRemaining.end()) {
        guessRemaining.erase(it);
        if (digits.find(c) == digits.end()) {
          guessWrong.insert(c);
        }
      }
    }

    for (auto i : guessRemaining) {
      std::cout << i.first << "\t";
      // remain = {0,2,8}
    }

    for (char c : guessWrong) {
      std::cout << c << "\t";
    }

    int fails = 0;

    gameStatus(hidden, guessWrong, fails);
    getGuess();

    while (hidden.find('_') != std::string::npos && fails < 5) {
      char guess = validateInput();
      bool correctGuess =
          updateHiddenNumbers(num, hidden, guessWrong, fails, guess);

      gameStatus(hidden, guessWrong, fails);

      if (correctGuess) {
        printCorrect();
      } else
        printWrong();

      lastAttempts(5 - fails, hidden);
    }

    printWinOrLost(hidden, num);
    jugar = jugarOtraVez();
  }
  byeMessage();
}

int main() {
  std::cout << "welcome to the game... \n";
  play();
  return 0;
}
