/* read in a length in feet and inches
  - output equivalent length in meters and centimeters
  - use 3 functions minimum:
    - one for user input
    - one or more for calculating
    - one for output (console) -> Print function
    - include a loop that lets the user repeat this computation until they type 'exit' to exit
    - 1 ft = 0.3048 m
    - 1m = 100 cm
    - 1 ft = 12 in */

#include <iostream>
using namespace std;

void getUserInput(int& ft, int& in) { //gets user input

  cout << "Enter feet to convert: " << endl;
  cin >> ft;
  cout << "Enter inches to convert: " << endl;
  cin >> in;
}

double ftAndInToCm(int ft, int in) { // converts feet and inches to centimeters
  double totalIn = (ft * 12) + in;
  return (totalIn * 2.54);
}

double cmToM(double cm) { // converts centimeters to meters
  return ((int)cm / 100);
}

void printConversion(int m, double cm) { //prints conversion result
  cout << m << " meters " << cm << " centimeters" << endl;
}

int main() {
  int userFt;
  int userIn;
  int totalM;
  double totalCm;

  getUserInput(userFt, userIn);
  totalCm = ftAndInToCm(userFt, userIn);
  totalM = cmToM(totalCm);
  printConversion(totalM, totalCm - (totalM * 100));


  return 0;
}
