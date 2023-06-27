#include <iostream>
using namespace std;

void averageMax(double &max, double &average) {
  double val = 0;
  double total = 0;
  double count = 0;
  cout <<"Please enter a value, or -1 when you're done. "<<endl;
  cin >> val;
  while(val != -1){
    if(val > max){
      max = val;
    }
    total += val;
    count++;
    cout <<"Please enter a value, or -1 when you're done. "<<endl;
    cin >> val;
  }
  average = total / count;
}

int main(){
  double max = -1;
  double average = 0;
  averageMax(max, average);
  cout << "The max: " << max <<endl;
  cout << "The average: " << average <<endl;

  return 0;
}
