#include <iostream>
#include <string>
#include <vector>
using namespace std;

// you have a num n, if the sum of its digits is an even number
// return a new number without the digits at their even position, likewise
// with odd numbers.
// so input: 35192, output: 312

vector<int> digitOperation(int num) {
  vector<int> val;
  int numOfDigits = 0;
  int temp = num;
  while (num) {
    num /= 10;
    numOfDigits++;
  }
  val.push_back(numOfDigits);
  int r, sumDigits = 0;
  while (temp) {
    r = num % 10;
    num /= 10;
    sumDigits += r;
  }
  val.push_back(sumDigits);
  return val;
}

int sumDigits(int num) {
  // sum all the digits of num
  int r, sum = 0;
  while (num) {
    r = num % 10;
    num /= 10;
    sum += r;
  }
  return sum;
}

void removing(int num, int sum) {
  int new_num;
  string numString = to_string(num);
  vector<int> nums;

  for (char digitChar : numString) {
    // creating a vector with all the elements from num
    int digit = digitChar - '0';
    nums.push_back(digit);
  }
  if (sum % 2 == 0) {
    int indexToKill = 1;
    while (indexToKill < nums.size()) {
      nums.erase(nums.begin() + indexToKill);
      indexToKill += 1;
    }
  } else {
    int indexToKill = 0;
    while (indexToKill < nums.size()) {
      nums.erase(nums.begin() + indexToKill);
      indexToKill += 1;
    }
  }
  for (auto i : nums) {
    cout << i;
  }
}

int main() {
  int n = 12;
  int sum = sumDigits(n);
  removing(n, sum);
  return 0;
}
