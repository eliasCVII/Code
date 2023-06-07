#include <cstdio>

int absolute_value(int x) {
  int result = 0;

  if (x >= 0) {
    return x;
  } else if (x < 0) {
    x = x * -1;
    return x;
  }
  return result;
}

int main() {
  int my_num = 786;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
