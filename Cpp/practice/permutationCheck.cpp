#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main() {
  int n;
  vi sequence;
  vi og;
  cin >> n;
  for (int i = 0; i < n; i++) {
    og.push_back(i + 1);
    int input;
    cin >> input;
    sequence.push_back(input);
  }
  sort(sequence.begin(), sequence.end());
  (sequence == og) ? cout << "Yes" : cout << "No";
  return 0;
}
