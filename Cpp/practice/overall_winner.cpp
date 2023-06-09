#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  void winner(int t, int a) {
    if (t > a) {
      cout << "T";
    } else
      cout << "A";
  }
  void overall(string &wins) {
    unordered_map<string, int> countMap;
    vector<string> S;
    for (char c : wins) // Add chars to vector S
    {
      if (c == 'T') {
        S.push_back("T");
      } else if (c == 'A') {
        S.push_back("A");
      }
    }

    for (const auto &str : S) // Check the elements in S and count each of them
    {
      countMap[str]++; // add up the occurrences of the strings inside the
                       // vector
    }
    int winT = countMap["T"];
    int winA = countMap["A"];

    if (winT == winA) // if its a tie, pop back the last win
    {
      if (!S.empty()) {
        S.pop_back();
        countMap.clear(); // clear the previous count
        for (const auto &str : S) {
          countMap[str]++;
        }
        winT = countMap["T"];
        winA = countMap["A"];
      }
    }
    winner(winT, winA);
  }
};

int main() {
  Solution ans;
  string wins;
  cin >> wins;
  ans.overall(wins);
  return 0;
}
