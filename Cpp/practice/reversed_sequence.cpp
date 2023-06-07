#include <iostream>
#include <vector>
using namespace std;

std::vector<int> reverseSeq(int n) {
  int a;
  vector<int> v;
  for (int i = 1; i <= n; i++) {
    a = (n - i) + 1;
    v.push_back(a);
  }
  return v;
}

void func(const vector<int> &vect) {
  for (int i = 0; i < vect.size(); i++)
    cout << vect[i] << " ";
}

int main() {
  int n, a;
  cin >> n;
  vector<int> vect;
  // for (int i = n; i >= 1; i--) {
  //   // a = (n - i) + 1;
  //   vect.push_back(i);
  // }
  while (n)
    vect.push_back(n--);
  func(vect);
  // cout << "vector has " << vect.size() << "elements";
  return 0;
}
