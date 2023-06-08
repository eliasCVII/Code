#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;

int countPrimes(int n) {
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }
  int numPrimes = 0;
  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      numPrimes++;
    }
  }
  int numPrimeIndices = 0;
  for (int i = 2; i <= n; i++) {
    if (isPrime[i] && isPrime[numPrimeIndices + 1]) {
      numPrimeIndices++;
    }
  }
  int numNonPrimeIndices = n - numPrimeIndices;
  int ans = 1;
  for (int i = 1; i <= numPrimes; i++) {
    ans = (ans * i) % MOD;
  }
  for (int i = 1; i <= numNonPrimeIndices; i++) {
    ans = (ans * i) % MOD;
  }
  return ans;
}

int main() {
  int n = 5;
  long ans = countPrimes(n);
  return 0;
}
