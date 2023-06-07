#include <bits/stdc++.h>
using namespace std;

// use hashmaps to do just one pass of the number list

/* sketch
   get vector[]
   (0,n-1)
   a = 0
   b = 0
   c = nums[a] + nums[b]
   while c<=k
    if(c == target)
     cout << a << , << b
    else if (a<=n)
   return c
*/

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (map.find(complement) != map.end()) {
        return {map[complement], i};
      }
      map[nums[i]] = i;
    }
    return {-1, -1};
    // vector<int> ans;
    // return ans;
  }
};

int main() {
  Solution puta;
  vector<int> v = {3, 2, 4};
  vector<int> ans = puta.twoSum(v, 6);
  // vector<int> ans;
  for (int x : ans) {
    cout << v[x] << "\t";
  }

  return 0;
}
