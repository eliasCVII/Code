#include <iostream>
using namespace std;

int main () {
  int a, b;

  cout << "Please input two integers\n";
  cin >> a >> b;

  if (a > b) {
    cout << a << " > " << b << endl;
  } else if (b > a) {
    cout << b << " > " << a << endl;
  } else if ( b >= a) {
    cout << b << " = " << a << endl;
  }

  return 0;
}
