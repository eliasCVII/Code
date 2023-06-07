#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<double> convertTemperature(double celsius) {
    vector<double> temps;
    double kelvin, fahren;
    kelvin = celsius + 273.15;
    fahren = celsius * 1.80 + 32.00;
    temps.push_back(kelvin);
    temps.push_back(fahren);
    return temps;
  }
};

int main() {
  vector<double> temps = {};
  double celsius = 36.50;
  double kelvin, fahren;
  kelvin = celsius + 273.15;
  fahren = celsius * 1.80 + 32.00;
  temps.push_back(kelvin);
  temps.push_back(fahren);
  // cout << temps[0] << temps[1];

  for (auto i : temps) {
    cout << i << " ";
  }
}
