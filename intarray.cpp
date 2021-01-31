/* read up to 10 nonnegative integers into an array called numberArray
  - print the integers back to the screen (no functions needed)*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int numberArray[10];
  int userInput;
  int count = 0;

  cout << "Enter up to 10 nonnegative integers, separated by spaces. Type '-1' to quit." << endl;
  while(true) {
    cin >> userInput;
    if (userInput == -1) { // early exit condition
      break;
    }
    else if (userInput >= 0) { // if user input is not negative
      numberArray[count++] = userInput; //adds the user input to the array
      if (count ==  10) { // exit condition
        break;
      }
    }
    else {
      cout << "Please enter a nonnegative number: " << endl;
    }
  }

  for (int i = 0; i < count; ++i) { // prints each item in the array
    cout << numberArray[i] << " ";
  }
  return 0;
}
