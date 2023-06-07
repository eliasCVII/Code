#include <iostream>
using namespace std;

int quadrant(int x, int y)
{
  // stuff
  int q;
  q = (x < 0) ? ((y < 0) ? 3 : 2) : (y < 0) ? 4
                                            : 1; // compact if-else
  return q;
}

int main()
{
  int x, y;
  cin >> x;
  cin >> y;
  cout << quadrant(x, y) << endl;
}