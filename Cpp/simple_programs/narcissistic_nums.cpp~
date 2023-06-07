#include <iostream>
#include <cmath>
using namespace std;

/*
A narcissistic number is any positive number, where the sum of each of its digits raised to the n of digits is equal to itself.
153 is an example, 1^3+5^3+3^3=153

vars:
num: input number
d: individual digit
r: calc the remainder to count digits
i : holds the num of digits
p: nth power to raise each digit
narcSum: contains the sums of the raised digits
*/

int counter(int num)
{
  // count the num of digits
  int r, i;
  i = 0;
  while (num > 0)
  {
    r = num % 10;
    num = num / 10;
    i++;
  }
  return i;
}

int raiser(int n, int num)
{
  // raise each digit to p and sum them, return final sum...
  int r, narcSum;
  narcSum = 0;
  while (num > 0)
  {
    r = num % 10;
    num = num / 10;
    narcSum = narcSum + pow(r, n);
  }
  return narcSum;
}

bool narcissistic(int narcSum, int num)
{
  return (narcSum == num) ? true : false;
}

int main()
{
  int num, narc, p;
  cout << "input yo number" << endl;
  cin >> num;
  p = counter(num);
  narc = raiser(p, num);
  cout << narcissistic(narc, num) << endl;
  // string isnarc = (raiser(p, num) == num ? "is a narc number" : "not a narc number");
}