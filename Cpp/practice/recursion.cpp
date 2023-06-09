#include <iostream>

using namespace std;

int fact(int n) {
  // direct recursion
  if (n < 0) {
    return 0;
  } else if (n == 1 || n == 0) {
    return 1;
  } else
    return n * fact(n - 1);
}

void print(int n) {
  // tail recursion
  if (n < 0)
    return;
  cout << " " << n;
  print(n - 1);
}

int main() {
  int n = 5;
  int a = 1;
  print(n);
  return 0;
}
