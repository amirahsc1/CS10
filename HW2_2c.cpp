#include<iostream>


using namespace std;
int main()

{
  int grades, count, max=0, min=30;
  float average, sum = 0.0;

 while ( grades >= 0 )
{
  cout <<"What was the students quiz score?\n";
  cin >> grades;
  sum = sum + grades;
  count = count + 1;

  if (grades == -1) {
    break;
  }

  if (grades >= max && grades <= 30){
    max = grades;
  }
  if (grades <= min && grades >= 0 ){
    min = grades;
  }

  if (grades < 0 || grades > 30){
    cout << "Error! number should be between 0 and 30. Enter another number" << endl;
    continue;
  }
grades++;
}
cout << "The average quiz score:\n" << sum / (count - 1) << endl;
cout <<" the largest Quiz Score is:\n" << max << endl;
cout <<" the smallest Quiz Score is:\n" << min << endl;


  return 0;
}
