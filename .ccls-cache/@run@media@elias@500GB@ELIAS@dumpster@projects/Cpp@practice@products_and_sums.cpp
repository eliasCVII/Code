#include <iostream>
using std::cout;

class Solution {
public:
  int numProducts(int n) {
    int r, products = 1;
    while (n) {
      r = n % 10;
      products *= r;
      n /= 10;
    }
    return products;
  }
  int numSum(int n) {
    int r, sum = 0;
    while (n) {
      r = n % 10;
      sum += r;
      n /= 10;
    }
    return sum;
  }

  int subtractProductAndSum(int n) {
    int result = numProducts(n) - numSum(n);
    return result;
  }
};

int main() {
  Solution ans;
  int n = 234;
  std::cout << ans.subtractProductAndSum(n);
  return 0;
}
