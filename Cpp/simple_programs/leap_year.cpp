/*
input: year
output: is it a leap year? only if yes

given a year,
is it divisible by 4? yes, is it divisible by 100? yes, is it divisible by 400? yes, then its a leap year, else it isnt

vars: year, r
functions:
int leaper(int &year)

*/

#include <iostream>
using namespace std;

/*int leaper(int &year)
{
  int v;
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        v = 1;
      }
      else
        v = 0;
    }
    else
      v = 1;
  }
  return v;
}

*/

int main()
{
  int year, q, v;
  cout << "input any year: " << endl;
  cin >> year;
  // q = leaper(year);
  q = (year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0 ? 1 : 0)) : 1) : 0;
  string leap = (q == 1) ? " a leap year" : " not a leap year";
  cout << year << " is" << leap << endl;

  return 0;
}