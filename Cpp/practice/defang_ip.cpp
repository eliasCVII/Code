#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// Given a valid (IPv4) IP address, return a defanged version of that IP
// address. A defanged IP address replaces every period "." with "[.]".
// just a lot of string operations str1 + str2 + etc...

class Solution {
public:
  string defangIPaddr(string address) {
    string defanged;
    for (auto i = 0; i < address.size(); i++) {
      if (address[i] == '.') {
        defanged += "[.]";
      } else {
        defanged += address[i];
      }
    }
    return defanged;
  }
};

int main() {
  Solution ans;
  cout << ans.defangIPaddr("192.1.168.0.23") << "\n";
  string test = "heyhowmany characters are here";
  cout << test.size();
}
