#include<iostream>
#include <string>

using namespace std;
int main()
{
int classSchedule;
cout << "What Day is it?"<< endl;
cin >> classSchedule;

switch (classSchedule)
{
  case 1:
    cout << "Monday: 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
    break;
  case 2:
    cout << "Tuesday: PHYS 2 at 12:10, CSCI 10 lab at 2:15";
    break;
  case 3:
    cout << "Wedensday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
    break;
  case 4:
    cout << "Thursday:PHYS 2 at 12:10";
    break;
  case 5:
    cout << "Friday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
    break;
  default:
    cout << "Unknown Day";
}

return 0;
}
