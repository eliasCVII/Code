#include <iostream>
#include <string>
using namespace std;

string createPhoneNumber(const int arr[10]) {
  string firstBlock, secondBlock, thirdBlock;
  for (int i = 0; i < 3; i++) {
    firstBlock += to_string(arr[i]);
  }
  for (int i = 3; i < 6; i++) {
    secondBlock += to_string(arr[i]);
  }
  for (int i = 6; i < 10; i++) {
    thirdBlock += to_string(arr[i]);
  }
  string phoneNum = "(" + firstBlock + ") " + secondBlock + "-" + thirdBlock;
  return phoneNum;
}
