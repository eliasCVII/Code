#include <cmath>
#include <iostream>
using namespace std;

void raicez(int a, int b, int c) {
  // Si a es 0, la ecuacion pasa a ser lineal
  if (a == 0) {
    cout << "invalido";
    return;
  }

  int d = b * b - 4 * a * c;
  double sqrt_val = sqrt(abs(d));

  if (d > 0) {
    cout << "Raicez reales y distintas \n";
    cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
         << (double)(-b - sqrt_val) / (2 * a);
  } else if (d == 0) {
    cout << "Ambas raicez son iguales \n ";
    cout << -(double)b / (2 * a);
  } else // d < 0
  {
    cout << "Roots are real and same \n";
    cout << -(double)b / (2 * a) << " + i" << sqrt_val / (2 * a) << "\n"
         << -(double)b / (2 * a) << " - i" << sqrt_val / (2 * a);
  }
}

int main() {
  float a, b, c;
  cin >> a >> b >> c;
  raicez(a, b, c);
  return 0;
}
