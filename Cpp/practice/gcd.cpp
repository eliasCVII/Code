#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, (a % b));
}

void SieveOfEratosthenes(int n) {
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));
  for (int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= n; i += p) {
        prime[i] = false;
      }
    }
  }
  for (int p = 2; p <= n; p++) {
    if (prime[p])
      cout << p << " ";
  }
}

int main() {
  int a, b;
  int n = 50;
  a = 20;
  b = 7;
  cout << gcd(a, b) << "\t";
  SieveOfEratosthenes(n);
  return 0;
}
