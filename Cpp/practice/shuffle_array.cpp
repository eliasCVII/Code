#include <iostream>
#include <vector>
// Given the array nums consisting of 2n elements in the form
// [x1,x2,...,xn,y1,y2,...,yn]. Return the array in the form
// [x1,y1,x2,y2,...,xn,yn].
// My brute force solution...!!

using namespace std;

class Solution {
public:
  vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> shuffled;
    for (int i = 0; i < n; i++) {
      shuffled.push_back(nums[i]);
      shuffled.push_back(nums[i + n]);
    }
    return shuffled;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
  vector<int> answer;
  Solution ans;
  answer = ans.shuffle(nums, nums.size() / 2);
  cout << "size of nums/2: " << nums.size() / 2 << "\t"
       << "\n";
  for (auto i : answer) {
    cout << i << " ";
  }
  return 0;
}
