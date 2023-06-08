#include <iostream>
#include <vector>
const int MOD = 1e9 + 7;
#include <string>
using namespace std;

class Solution {
public:
  bool isPrime(int n) {
    if (n <= 1) {
      return false;
    }
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }

  int numPrimeArrangements(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
      if (isPrime(i)) {
        for (int j = i * i; j <= n; j += i) {
          dp[j] = (dp[j] + dp[i - 1]) % MOD;
        }
      }
    }
    return dp[n];
  }
};

int main() {
  Solution ans;
  int n = 5;
  cout << ans.numPrimeArrangements(n);
  return 0;
}
