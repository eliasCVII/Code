/*
take input x, y
if x or y == 0, crash the program... and reinput the values...
check sign of x
check sign of y

if x > 0 ^ y > 0, the pair belongs to 1
else if x < 0 ^ y > 0, the pair belongs to 2
else if x < 0 ^ y < 0, the pair belongs to 3
else x > 0 ^ y < 0, the pair belongs to 4

*/
#include <iostream>
using namespace std;

int quadrant(int x, int y)
{
  int q;
  if (x > 0 && y > 0)
  {
    q = 1;
  }
  else if (x < 0 && y > 0)
  {
    q = 2;
  }
  else if (x < 0 && y < 0)
  {
    q = 3;
  }
  else
    q = 4;

  return q;
}

int main()
{
  int x, y;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  int quad = quadrant(x, y);
  cout << quad << endl;
}