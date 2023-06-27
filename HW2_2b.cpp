#include<iostream>


using namespace std;
int main()

{
  int count;
  double grades, average, sum = 0.0, wrongNum = 0;

while ( grades >= 0 )
{
  cout <<"What was the students quiz score?\n";
  cin >> grades;
  count = count + 1;

  if (grades > 0 && grades < 30)
    sum = grades + sum;
  else
    wrongNum = wrongNum + 1;

  if (grades < 0 || grades > 30)
  {
    cout << "Error! number should be between 0 and 30. Enter another number" << endl;
    continue;
  }
  if (grades == -1) {
    break;
  }

}
cout << "The average quiz score:\n" << sum / (count - wrongNum) << endl;

  return 0;
}
