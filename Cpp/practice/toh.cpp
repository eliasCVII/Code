#include <bits/stdc++.h>
using namespace std;

void tower(int n, char sourcePole, char destinationPole, char auxiliaryPole) {
  if (n == 0) // base case
    return;
  tower(n - 1, sourcePole, auxiliaryPole, destinationPole);
  cout << "move disk: " << n << " from: " << sourcePole
       << " to: " << destinationPole << "\n";

  tower(n - 1, auxiliaryPole, destinationPole, sourcePole);
}

int main() {
  // n is the number of disks to move...
  int n;
  cout << "how many disks?: ";
  cin >> n;
  tower(n, 'S', 'D', 'A');
  return 0;
}
