#include <iostream>

using namespace std;

int main() {
  int a, b, c, count = 0;
  cin >> a >> b >> c;
  for (int i = a; i <= b; i++) {
    if (i % c == 0) {
      cout << i << "\n";
      count++;
      break;
    }
  }
  if (count == 0) {
    cout << "-1"
         << "\n";
  }
  return 0;
}
