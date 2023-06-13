#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  int equalPairs(vector<vector<int>> &grid) {
    int ans = 0;
    int n = grid.size();
    map<vector<int>, int> pairs;
    for (vector<int> row : grid) {
      pairs[row]++;
    }
    for (int i = 0; i < n; i++) {
      vector<int> columns;
      for (int j = 0; j < n; j++) {
        columns.emplace_back(grid[j][i]);
      }
      ans += pairs[columns];
    }
    return ans;
  }
};

int main() {
  Solution ans;
  vector<vector<int>> grid = {
      {3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
  cout << ans.equalPairs(grid);

  // cout << grid.size() << "\n";    // num of rows
  // cout << grid[0].size() << "\n"; // num of columns
  return 0;
}
