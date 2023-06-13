#include <iostream>
#include <vector>
using namespace std;

/*
*Given an integer array nums of length n, you want to create an array ans of
length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n
(0-indexed). Specifically, ans is the concatenation of two nums arrays. Return
the array ans.*
*/
// get n elements and create a new vector and push back the array twice, so
// ans has 2n elements
//
// vector<int> getConcatenation(vector<int>& nums) {
//     vector<int> ans ;
//     for(int i=0 ; i<2*nums.size() ; i++){
//         ans.push_back(nums[i%nums.size()]);
//     }
//     return ans ;
// }

class Solution {
public:
  vector<int> getConcatenation(vector<int> &nums) {
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    while (i < 2) {
      for (auto i : nums) {
        ans.push_back(i);
      }
      i++;
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int input;
  Solution ans;
  vector<int> answer = ans.getConcatenation(nums);
  cout << answer.size() << "\n";
  for (auto i : answer) {
    cout << i << "\n";
  }
  return 0;
}
