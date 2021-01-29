/* problem 1 - cereal
 - read the weight (console input) of breakfast cereal in ounces
 - output the weight in metric tons
 - output the number of boxes needed to yield one metric ton */

#include <iostream>
using namespace std;

int main() {
  double weightOz;
  double mTons;
  int boxes;

  cout << "Enter the weight of a package of breakfast cereal in ounces: " << endl;
  cin >> weightOz;

  mTons = weightOz / 35273.92; // calculate metric tons given ounces
  boxes = 35273.92 / weightOz; // calculate number of boxes needed to yield a metric ton

  cout << "Weight in metric tons: " << mTons << endl;
  cout << "Number of boxes needed to yield one metric ton: " << boxes << endl;
  
  return 0;
}
