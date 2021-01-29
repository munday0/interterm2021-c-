/* determine whether a meeting room is in violation of fire regulation laws
- read in the maximum room capacity and number of people attending
- if number of people <= max capacity, it's legal
- if number of people > max capacity, metting can't be held
- reports the number of people that must be excluded for meeting to be legal */

#include <iostream>
using namespace std;

int main() {
  int maxCapacity;
  int numPeople;

  cout << "Enter max capacity of meeting room (an integer): " << endl;
  cin >> maxCapacity;

  cout << "Enter number of people attending (an integer): " << endl;
  cin >> numPeople;

  if (numPeople <= maxCapacity) {
    cout << "It is legal to hold the meeting." << endl;
    cout << maxCapacity - numPeople << " more people may attend." << endl; // states how many more people can attend before max capacity is reached
  }
  else {
    cout << "The meeting can't be held as planned due to fire regulations." << endl;
    cout << numPeople - maxCapacity << " people must be excluded in order to meet regulations." << endl; // states how many people must be excluded
  }

  return 0;
}
