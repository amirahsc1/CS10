#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


int main(){
  const int SIZE = 5;
  srand(time(0));

  string spanish[] = {"gato", "perro", "uno", "dos", "tres"};
  string english[]= {"cat", "dog", "one", "two", "three"};
  int score [] = {0, 0, 0, 0, 0};
  int correct = 0;
  int attempts = 0;
  string ans;

  while (correct < 10){
    int i = rand()%5;
    if (score[i] < 2){
      cout << "What is the English of, "
      << spanish[i];
      cin >> ans;
      if (ans == english[i]) {
        correct = correct + 1;
        score[i] = score[i] + 1;
      }
      else {
        cout << "The right answer is: " <<
        english[i] <<endl;
      }
      attempts = attempts + 1;
    }
  }
  cout << attempts;
  return 0;
}

/*
spanish = ["gato", "perro", "uno", "dos", "tres"]
english = ["cat", "dog", "one", "two", "three"]
score = [0,0,0,0,0]


correct = 0
attempts = 0
while correct<10
        index = rand()%5
        if score[index]<2
            print("What is the English of", spanish[index])
            answer = input()
            if answer == english[index]:
                correct=correct+1
                score[index] = score[index]+1
            else
                print("The right answer is: ", english[index])

	    attempts = attempts+1

print(attempts)
*/
