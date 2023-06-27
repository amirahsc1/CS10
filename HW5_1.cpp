#include <iostream>
#include <cmath>

using namespace std;

double averageScore(int scores[], int size);
void fill(int scores[], int size, int& numberUsed);
const int MAX_SIZE = 20;
int main(){
  int  numberUsed;
  int testArr[MAX_SIZE];

  fill(testArr, MAX_SIZE , numberUsed);
  double average = averageScore(testArr, numberUsed);

  for (int i = i - 1; i < numberUsed ; i++){
    cout <<"Quiz Score: " << testArr[i]<< endl;
  }
  cout << "The average quiz score is: " << average << endl;


  return 0;
}
void fill(int scores[], int size, int& numberUsed){
int current = 0;
int count = 0;
  for(int i = 0; i < size; i++){
    cout << "Enter the test scores of your students."<<
    "When you are finished with the list add '-1'";
    cin >> current;
    scores[i] = current;
    count = i;
    if (current > 30 || current < 0){
      cout<<"You have entered an invalid quiz Score."
      << "You'll be given the average of the previous quiz Scores";
      break;
    }
  }
  numberUsed = count;
}
double averageScore(int scores[], int numberUsed){
  int sum = 0;
  for (int i = 0; i < numberUsed; i++){
    sum = sum + scores[i];
    if (scores[i] == -1){
       return (sum/numberUsed);
      }
    }
  return (sum/numberUsed);
}
