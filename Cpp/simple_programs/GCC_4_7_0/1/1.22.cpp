#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
  Sales_item books, nextbook;
  int count = 0;
  cout << "Enter your data: " << endl;
  if (!(cin >> books)) // if there are no inputs kill program....
  {
    cerr << "Wrong data fag...";
    return -1;
  }
  ++count; // Increase the count

  while (cin >> nextbook)
  {
    if (nextbook.isbn() != books.isbn())
    {
      cerr << "ISBN mismatch" << endl;
      return -1;
    }
    ++count;
  }
  cout << count << endl;
  return 0;
}
