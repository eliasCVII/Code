#include <iostream>
using namespace std;

int contar(int num) // contar cantidad de digitos de nuestro numero
{
  int r, i;
  i = 0;
  while (num > 0) { // este loop calcula la cantidad de digitos
    r = num % 10;
    num = num / 10;
    i++;
  }
  return i;
}

int impar(int val, int pos) {
  // extraer el numero central de nuestro numero principal
  int dc;
  int i = 0;
  for (i = 1; i <= pos; i++) {
    val = val / 10;
  }
  dc = val % 10;
  return dc;
}

int main() {
  int a, l, l2, p1, p2;
  cout << "ingrese un numero entero: ";
  cin >> a;
  l = contar(a) / 2;
  l2 = l - 1;
  int y = contar(a);

  if (y == 1 || y == 2) { // si la cantidad de digitos es 1 o 2, entonces...
    if (y == 1) {
      cout << "digito central: " << a << endl;
    } else {
      p1 = impar(a, l);
      p2 = impar(a, l2);
      cout << "digitos centrales: " << p1 << ", " << p2 << endl;
    }
  }

  else if (l % 2 == 0) { // en caso de que haya una cantidad par de digitos
    p1 = impar(a, l);
    p2 = impar(a, l2);
    cout << "los digitos centrales son: " << p1 << ", " << p2 << endl;

  } else { // cuando hay una cantidad impar de digitos...
    p1 = impar(a, l);
    cout << "digito central es " << p1 << endl;
  }
  return 0;
}
