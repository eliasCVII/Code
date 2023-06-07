#include <iostream>
#include <vector>
#include <string>
using std::cout, std::vector;

/*
If we list all the natural numbers below 10 that are multiples of
3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

vector<int> multiples(int &n)
{
  vector<int> m_of_n;
  for (int i = 1; i < n; i++)
  {
    // int multiple = n / i;
    if ((i % 3) == 0)
    {
      m_of_n.push_back(i);
    }
    else if ((i % 5) == 0)
    {
      m_of_n.push_back(i);
    }
  }
  return m_of_n;
}

int sum_of_multiples(vector<int> multiples)
{
  int sum = 0;
  for (int i : multiples)
  {
    sum += i;
  }
  return sum;
}

int sumOfDivisors(int d, int &n)
{
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (i % d == 0)
    {
      sum += i;
    }
  }
  return sum;
}

int main()
{
  int n = 1000;
  int sum = sumOfDivisors(3, n) + sumOfDivisors(5, n) - sumOfDivisors(15, n);
  // vector<int> nums = multiples(n);
  // for (const auto &i : nums)
  // {
  //   cout << i << " ";
  // }
  // int sum = sum_of_multiples(nums);
  cout << sum << "\n";
  return 0;
}
