#include <iostream>
#include "Sales_item.h"
using namespace std;

// int main()
// {
//   Sales_item item1, item2;
//   cin >> item1 >> item2;
//   cout << item1 + item2 << endl;
//   return 0;
// }

int main()
{
  Sales_item book;
  while (cin >> book)
  {
    cout << book << endl;
  }
  return 0;
}