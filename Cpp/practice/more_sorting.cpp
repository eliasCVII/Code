#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());
  for (auto i : v) {
    cout << i << "\t";
  }
}
