#include <array>
#include <iostream>
#include <vector>
using namespace std;

// Time complexity 0(n^2)

int main() {
  int arr[] = {1, 2, 4, 5, 12, 3, 8, 6, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  vector<int> swapped;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    int num = arr[i];
    swapped.push_back(num);
  }

  for (auto i : swapped) { // print the sorted array...
    cout << i << "\n";
  }
  return 0;
}
