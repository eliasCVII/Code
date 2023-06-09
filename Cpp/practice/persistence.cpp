#include <bits/stdc++.h>
using namespace std;

int numDigit(int n) {
  int count = 0;
  while (n) {
    count += 1;
    n /= 10;
  }
  return count;
}
int digitProduct(int n) {
  int r, p = 1;
  while (n) {
    r = n % 10;
    p *= r;
    n /= 10;
  }
  return p;
}

int persistence(long long n) {

  int count = 0;
  if (n < 10) {
    return 0;
  }
  while (n >= 10) {
    int p = 1;
    while (n > 0) {
      p *= n % 10;
      n /= 10;
    }
    n = p;
    count++;
  }
  return count;
}

int main() {
  int n = 25;
  cout << persistence(n);
  return 0;
}
