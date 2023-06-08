#include <iostream>
#include <vector>
#include <unordered_set>

using std::vector;

// given an array nums, return true if there are any duplicates, return false otherwise.

class Solution {
public:
  bool containsDuplicate(vector<int> &nums){
    std::unordered_set<int> numSet;
    for ( int num : nums){
      if (numSet.find(num) != numSet.end()) {
        return true;
      }
      numSet.insert(num);
    }
    return false;
  }
};

int main(){
  Solution ans;
  vector<int> nums = {1, 2, 3, 1};
  std::cout << ans.containsDuplicate(nums);

}
