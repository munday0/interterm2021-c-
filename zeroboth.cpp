/* implement a void function called zeroBoth that has two call-by-reference parameters
   - both variables are of type int
   - sets the values of both variables to 0*/
#include <iostream>
using namespace std;

void zeroBoth(int& val1, int& val2) { // always sets input values to 0
  val1 = 0;
  val2 = 0;
}

int main() {
  int v1;
  int v2;

  cout << "Enter first integer: " << endl;
  cin >> v1;
  cout << "Enter second integer: " << endl;
  cin >> v2;

  zeroBoth(v1, v2);
  cout << v1 << " " << v2 << endl;
  return 0;
}
