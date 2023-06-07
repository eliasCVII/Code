#include <iostream>
using namespace std;

bool isPrime(int num) {
  if (num < 2)
    return false;
  if (num == 2)
    return true;
  if (num % 2 == 0)
    return false;
  for (int i = 3; (i * i) <= num; i += 2) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int num;
  cin >> num;
  string ans = (isPrime(num) ? "true" : "false");
  cout << ans;
  return 0;
}
