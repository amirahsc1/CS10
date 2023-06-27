#include <iostream>

using namespace std;
int main(){
  double weight , activeMin , finalWeight, caloriesBurned, totalCalorie;
  int activity;

  cout << "What is your weight in pounds?"<< endl;
  cin >> weight;
  finalWeight = weight/2.205;
  cout << "What is the metabolic equivalent of your activity?"<< endl;
  cin >> activity;
  cout <<"What is the number of minutes spent doing that activty?"<< endl;
  cin >> activeMin;
  activity = activeMin/activity;
  caloriesBurned = .0175 * activity * finalWeight;
  totalCalorie = caloriesBurned * activeMin;
  cout <<"You burned:" << caloriesBurned << " calories per minute. \n"
  <<"For a total of " << totalCalorie << " calories burned during your activty."
  << endl;
return 0;
}
