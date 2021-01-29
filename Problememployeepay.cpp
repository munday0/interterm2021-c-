/* an employee is paid $16 an hour for (40) regular hours worked in a week
- overtime is paid 1 1/2 times the above rate
- 6% of pay is withheld for Social Security tax
- 14% is withheld for federal income tax
- 5% is withheld for state income tax
- $10 per week is withheld for medical insurance

- read in the number of hours worked in a week as input
- output the worker's gross pay, each withholding amount, and the net take-home pay for the week */

#include <iostream>
using namespace std;

int main() {
  double hoursWorked;
  double grossPay;
  double overtimePay;
  double socSecurity;
  double fedIncome;
  double stateIncome;
  int medInsurance = 10;
  double netPay;

  cout << "Enter the number of hours worked in a week: " << endl;
  cin >> hoursWorked;

  // calculate worker's gross pay
  if ((hoursWorked >= 0) && (hoursWorked <= 40)) {
    grossPay = hoursWorked * 16;
  }
  else {
    overtimePay = (hoursWorked - 40) * 24;
    grossPay = 640 + overtimePay; //640 is 40 * 16, accounting for the payment of 40 regular hours worked
  }

  cout << "Gross pay: " << grossPay << endl;


  //calculate withholding amounts
  socSecurity = grossPay * 0.06;
  fedIncome = grossPay * 0.14;
  stateIncome = grossPay * 0.05;

  cout << "Social Security tax: " << socSecurity << endl;
  cout << "Federal income tax: " << fedIncome << endl;
  cout << "State income tax: " << stateIncome << endl;

  //calculate net take-home pay
  netPay = grossPay - socSecurity - fedIncome - stateIncome - medInsurance;

  cout << "Net take-home pay: " << netPay << endl;

  return 0;
}
