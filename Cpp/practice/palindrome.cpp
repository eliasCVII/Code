#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// convert int to string, make a copy and compare it to the reversed one

class Solution
{
public:
  bool isPalindrome(int x)
  {
    string num = to_string(x);
    string num2 = num;
    reverse(num.begin(), num.end());

    if (num == num2)
    {
      return true;
    }
    else
      return false;
  }
};

int main()
{
  int x;
  cin >> x;
  // reverse(x.begin(), x.end());
  Solution ans;
  cout << ans.isPalindrome(x);
  return 0;
}
