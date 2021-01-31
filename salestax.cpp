/* implement a function called addTax
  - 2 parameters: taxRate (float) and cost (float) -> note that taxRate is expressed as a percentage
  - function returns the value (float) of cost so that it includes sales tax */
#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) { //calculates the cost with tax included
  float costWithTax;
  costWithTax = cost + (cost * (taxRate / 100));
  return costWithTax;
}

int main() {
  float taxR;
  float initCost;
  float totalCost;

  cout << "Enter tax rate (without the percentage sign): " << endl;
  cin >> taxR;
  cout << "Enter initial cost: " << endl;
  cin >> initCost;

  totalCost = addTax(taxR, initCost);
  cout << "Total cost with tax: " << totalCost << endl;

  return 0;
}
