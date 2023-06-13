#include <iostream>
#include <vector>
using namespace std;

/*
O(1) space complexity
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));
        }
        for(int i=0;i<n;i++){
            nums[i]/=n;
        }
        return nums;
    }
};
*/

class Solution {
public:
  vector<int> buildArray(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      // stuff
      ans.push_back(nums[nums[i]]);
    }

    return ans;
  }
};

int main() {
  Solution ans;
  vector<int> nums = {5, 0, 1, 2, 3, 4};
  vector<int> result = ans.buildArray(nums);
  // expected result: 0,1,2,4,5,3
  for (auto i : result) {
    cout << i << "\t";
  }
  return 0;
}
