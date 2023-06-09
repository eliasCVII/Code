#include "insertion_sort.h"

insertion_sort(item s[], int n) {
  int i, j;

  for (i = 1; i < n; i++) {
    j = 1;
    while ((j > 0) && (s[j] < s[j - 1])) {
      swap(&s[j], &s[j - 1]);
      j = j - 1;
    }
  }
}
