#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  int finalValueAfterOperations(vector<string> &operations) {
    map<string, int> toOperate;
    int x = 0;
    // int ans;
    for (auto i : operations) {
      toOperate[i]++;
    }
    for (const auto j : toOperate) {
      if (j.first == "--X" || j.first == "X--") {
        x -= j.second;
      }
      // stuff for substraction
      else if (j.first == "X++" || j.first == "++X") {
        x += j.second;
      }
    }
    return x;
  }
};

int main() {
  Solution ans;
  vector<string> operations = {"++X", "++X", "X++", "--X"};
  cout << ans.finalValueAfterOperations(operations);
  return 0;
}
