#include <iostream>
using namespace std;

void edgeChecka(int a, int b) {
  int difference = abs(a - b);
  if (difference == 1 || difference == 9) {
    cout << "Yes";
  } else
    cout << "No";
}

int main() {
  int a, b;
  cin >> a >> b;
  edgeChecka(a, b);
  return 0;
}
