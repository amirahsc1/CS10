#include <iostream>
#include <string>
using namespace std;

void input(int &, int &, char &);
void conversion(int &, int &, char &);
void output(int &, int &, char &);

int main () {
  int hour, minute;
	char day;
  char stop;

while (stop != 'n')
	{
		input(hour,minute, day);
		conversion(hour, minute, day);
		output( hour, minute, day);

		cout << "Press 'n' to stop the program or 'y' to continue" << endl;
		cin >> stop;

    if (stop == 'y'){
      input(hour,minute, day);
      conversion(hour, minute, day);
      output( hour, minute, day);
      cout << "Press 'n' to stop the program or 'y' to continue" << endl;
      cin >> stop;
    }

  }


  return 0;
}
void input(int &hour, int &minute, char &day ) {

  cout << "What is the hour" << endl;
  cin >> hour;
  cout << "What is the the minute" << endl;
  cin >> minute;
}

void conversion(int &hour, int &minute, char &day ){
    if (hour > 12){
      hour = hour - 12;
      day = 'p';
    }
    else if (hour == 12){
      day ='p';

    }
    else {
      day = 'a';
    }

  }

void output(int &hour, int &minute, char &day){
  if (day =='p'){
    cout << "The time in 12-Hour notation is:"<<hour<<":"<<
    minute << " P.M" << endl;
  }
  else{
  cout << "The time in 12-Hour notation is:"<<hour<<":"<<
  minute << " A.M" << endl;
}
}
