#include <iostream>
using namespace std;

/*
You're given strings jewels representing the types of stones that are jewels,
and stones representing the stones you have. Each character in stones is a type
of stone you have. You want to know how many of the stones you have are also
jewels.

Letters are case sensitive, so "a" is considered a different type of stone from
"A".
this is O(mn) complexity...
*/

class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    for (char ch1 : jewels) {
      for (char ch2 : stones) {
        if (ch1 == ch2)
          count++;
      }
    }
    return count;
  }
};

int main() {
  Solution ans;
  string jewels = "z";
  string stones = "ZZ";
  cout << ans.numJewelsInStones(jewels, stones);
  return 0;
}
