#include <iostream>
#include <vector>

/*
Test cases:
using V = std::pair<int, int>;
using V2 = std::vector<V>;

Describe(Number){
  It(BasicTests){
    Assert::That(number(V2{V{10,0},V{3,5},V{5,8}}), Equals(5));
    Assert::That(number(V2{V{3,0},V{9,1},V{4,10},V{12,2},V{6,1},V{7,10}}),
Equals(17));
    Assert::That(number(V2{V{3,0},V{9,1},V{4,8},V{12,2},V{6,1},V{7,8}}),
Equals(21)); Assert::That(number(V2{V{0,0}}), Equals(0));
    Assert::That(number(V2{V{10,0},V{13,0},V{17,40}}), Equals(0));
  }
};
what we have: a pair of nums(a,b) a equals the ammount of people on the bus
b equals to the ammount of people that drop off at the bus stop
the plan?...
to our first array we sum index 0 of array2 to 0 of array1 and to index 1 of
array1 we substract index 1 of array2
*/

unsigned int number(const std::vector<std::pair<int, int>> &busStops)
{
  unsigned int answer = 0;
  for (std::pair<int, int> b : busStops)
  {
    answer += b.first;
    answer -= b.second;
  }
  return answer;
}

int main() { return 0; }

// answer=0
// for (int i: stops){
//     answer += stop1[0] + stop2[0]
//     answer -= stop1[1] - stop2[1]

// }
