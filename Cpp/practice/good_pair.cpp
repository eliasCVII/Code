#include <iostream>
#include <vector>
#include <unordered_map>

// count how many times a good pair happens in an array.

using std::vector;

class Solution {
public:
  int numIdentalPairs(vector<int>&nums){
    return 1;
  }
};

int main(){
  Solution ans;
  vector<int> nums = {1,2,3,1,1,3};
  std::cout << ans.numIdentalPairs(nums);
  return 0;
}
