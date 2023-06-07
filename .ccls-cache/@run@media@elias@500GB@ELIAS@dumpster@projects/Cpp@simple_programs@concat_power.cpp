#include <cmath>
#include <iostream>
using namespace std;

/*
problem: Welcome. In this kata, you are asked to square every digit of a number
and concatenate them. For example, if we run 9119 through the function, 811181
will come out, because 92 is 81 and 12 is 1. (81-1-1-81) Example #2: An input of
765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25.
(49-36-25) Note: The function accepts an integer and returns an integer. Happy
Coding!

vars:
num, for the input
s, a string that holds digit^2, then the chars concatenates s with itself...
each digit of num

*/

int square_digits(int num) {
  int r, square = 0;
  for (int mul = 1; num != 0; mul *= 10, num /= 10) {
    r = num % 10; // digit to work with
    square += r * r * mul;
    if (r * r > 10)
      mul *= 10;
  }
  return square;
}

int main() {
  int num;
  cout << "input a num: ";
  cin >> num;
  cout << square_digits(num) << endl;
  return 0;
}
