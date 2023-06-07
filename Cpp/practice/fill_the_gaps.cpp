#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void filledGap(vector<int> &S, int &N)
  {
    vector<int> noGap;
    // work with the vector...
    // check adjacent numbers, S[0], S[1]
    for (int i = 0; i < N - 1; i++)
    {
      noGap.push_back(S[i]);
      int difference = S[i + 1] - S[i];
      if (abs(difference) != 1) // if the difference is bigger than 1 fill the gap
      {
        int fill = difference > 0 ? 1 : -1;                 // calculates the difference between each adjacent num.
        for (int j = S[i] + fill; j != S[i + 1]; j += fill) // dont get this part yet...
        {
          noGap.push_back(j);
        }
      }
    }
    noGap.push_back(S[N - 1]); // no gap to be filled so...
    for (int num : noGap)
    {
      cout << num << " ";
    }
  }
};

int main()
{
  Solution ans;
  int N;
  cin >> N;

  vector<int> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i]; // Append all the nums to the vector
  }

  ans.filledGap(S, N);
  return 0;
}