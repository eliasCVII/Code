#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  int finalValueAfterOperations(vector<string> &operations) {
    map<string, int> toOperate;
    int x = 0;
    int ans;
    for (auto i : operations) {
      toOperate[i]++;
    }

    return ans;
  }
};

int main() {
  Solution ans;
  vector<string> operations = {"--X", "X++", "X++"};
  // expected = 1
  return 0;
}
