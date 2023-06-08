#include <iostream>
#include <unordered_map>
#include <vector>
#define F first
#define S second
// count how many times a good pair happens in an array.

using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int> &nums) {
    int pairs = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[i] == nums[j])
          pairs++;
      }
    }
    return pairs;
  }
};

class Solution2 {
public:
  int numIdenticalPairs(vector<int> &nums) {
    int ans = 0;
    unordered_map<int, int> output;
    for (auto &value : nums) {
      output[value]++; // count the frequency of the element
    }
    // output =
    // {1, 3}
    // {2, 2}
    for (auto &value : output) { // iterate over the output map
      int num = value.S;         // get the freq/val of each number/key
      // maps have a first and a second function, key, value.
      ans = ans + (num * (num - 1) / 2); // why does this work?
    }
    return ans;
  }
};

int main() {
  Solution2 ans;
  vector<int> nums = {1, 2, 1, 2, 1};
  cout << ans.numIdenticalPairs(nums) << "\n";
  return 0;
}
