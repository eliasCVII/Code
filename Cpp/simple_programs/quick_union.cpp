#include <iostream>
using namespace std;

int main()
{
  static const int N = 10000;
  int i, p, q, id[N];
  for (i = 0; i < N; i++)
    id[i] = i;
  while (cin >> p >> q)
  {
    for (i = p; i != id[i]; i = id[i])
      ;
    for (j = q; j != id[j]; j = id[j])
      ;
    if (i == j)
      continue;
    id[i] = j;
    cout << " " << p << " " << q << endl;
  }
}