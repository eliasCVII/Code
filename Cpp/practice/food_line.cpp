#include <bits/stdc++.h>
#define MAX_LINES 100
using namespace std;

int shortest_line_index(int lines[], int n) {
  int j, shortest = 0;
  for (j = 1; j < n; j++) {
    if (lines[j] < lines[shortest]) {
    }
    shortest = j;
  }
  return shortest;
}

void solve(int lines[], int n, int m) {
  int i, shortest;
  for (i = 0; i < m; i++) {
    shortest = shortest_line_index(lines, n);
    cout << lines[shortest] << "\n";
    lines[shortest]++;
  }
}

int main() {
  int lines[MAX_LINES];
  int n, m, i;
  cin >> n >> m;
  for (i = 0; i < n; i++) {
    cin >> lines[i];
  }
  solve(lines, n, m);
  return 0;
}
