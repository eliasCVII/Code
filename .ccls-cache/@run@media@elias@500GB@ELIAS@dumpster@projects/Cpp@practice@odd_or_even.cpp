#include <iostream>
#include <string>

/* is the sum of elements in a list even or odd?
   list = {1,2,3,4,5}
   for int i:list
   sum +=i
   return sum
   string ans = (sum % 2 == 0) ? "even" : "odd"
*/

int main() {
  int sum = 0;
  int list[] = {0};
  for (int i : list) {
    sum += i;
  }
  std::string ans = (sum % 2 == 0) ? "even" : "odd";
  std::cout << ans;
}
