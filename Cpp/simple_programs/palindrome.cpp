#include <iostream>
using namespace std;

int reverse(int val)
{
  int rev = 0;
  while (val != 0)
  {
    rev = rev * 10;
    rev = rev + (val % 10);
    val = val / 10;
  }
  return rev;
}

int main()
{
  int n;
  cout << "input any number: ";
  cin >> n;
  cout << n << " reversed is: " << reverse(n) << endl;

  if (reverse(n) == n)
  {
    cout << "it is a palindrome..." << endl;
  }
  else
  {
    cout << "it is not a palindrome..." << endl;
  }
  return 0;
}
