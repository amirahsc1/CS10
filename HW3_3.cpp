# include <iostream>
# include <cmath>
# include <cstdlib>
#include <string>
using namespace std;

int humanTurn (int humanTotalScore);
int computerTurn(int computerTotalScore);
int diceRoll( int roll);

void printIntro(){
cout << "Welcome to the dice game Pig!\nThe objective is to be first to score 100 points." << endl;
cout << endl;
}
const int HIGHSCORE = 100;
const int GAMER = 0;
const int COMPUTER = 1;

int main()
{
  srand(time(0));

  int turn = GAMER;
  int humanScore = 0;
  int computerScore = 0;

  printIntro();

  while (humanScore < HIGHSCORE && computerScore < HIGHSCORE) {
      if (turn == GAMER) {
          humanScore = humanTurn(humanScore);
          turn = COMPUTER;
      }
      else {
          computerScore = computerTurn(computerScore);
          turn = GAMER;
      }
  }

  if(humanScore >= HIGHSCORE){
  cout << " You Win!!" << endl;
  }
  else{
  cout <<"computer wins!" << endl;
  }

  return 0;
}
int humanTurn(int humanTotalScore){
int diceRoll;
char ans;
diceRoll = 1 + rand() % 6;
if(diceRoll != 1 && humanTotalScore < HIGHSCORE){
    cout << "You rolled a " << diceRoll << endl;
    humanTotalScore += diceRoll;
    cout << "Your score: " << humanTotalScore << endl;
    cout << "Do you want to roll again? (y/n): ";
    cin >> ans;
    cout << endl;
    diceRoll = rand() % 6 + 1;
while(ans == 'y'){
    if(diceRoll != 1 && humanTotalScore < HIGHSCORE){
      cout << "You rolled a " << diceRoll << endl;
      humanTotalScore += diceRoll;
      cout << "Your score: " << humanTotalScore << endl;
      cout << "Do you want to roll again? (y/n): ";
      cin >> ans;
      cout << endl;
      diceRoll = rand() % 6 + 1;
      }
    else if(diceRoll == 1 && humanTotalScore < HIGHSCORE){
      cout << "You rolled a " << diceRoll << " (PIG!)" << endl;
      cout << "Your turn is over" << endl;
      cout << "Your score is: " << humanTotalScore << endl;
      cout << endl;
      break;
        }
    }
}
return humanTotalScore;
}


int computerTurn(int computerTotalScore){
int diceRoll;
int compCount = 0;
char ans;
diceRoll = 1 + rand() % 6;
if(diceRoll != 1 && computerTotalScore < HIGHSCORE){
    cout << "The computer rolled a " << diceRoll << endl;
    computerTotalScore += diceRoll;
    compCount += diceRoll;
    cout << "Its score is: " << computerTotalScore << endl;
    diceRoll = rand() % 6 + 1;
while(compCount <= 20 && computerTotalScore < HIGHSCORE){
    if(diceRoll != 1 && computerTotalScore < HIGHSCORE){
      cout << "The computer rolled a " << diceRoll << endl;
      computerTotalScore += diceRoll;
      cout << "The computers score is: " << computerTotalScore << endl;
      diceRoll = rand() % 6 + 1;
      }
    else if(diceRoll == 1 && computerTotalScore < HIGHSCORE){
      cout << "The computer rolled a " << diceRoll << " (PIG!)" << endl;
      cout << "Its turn is over" << endl;
      cout << "It now has a score of: " << computerTotalScore << endl;
      compCount = (compCount * 0);
      cout << endl;

      break;
        }
    else if(compCount >= 20){
      compCount = (compCount * 0);
      cout << "The computer rolled a " << diceRoll << endl;
      cout << "Its turn is over" << endl;
      cout << "It now has a score of: " << computerTotalScore << endl;
      cout << endl;
      break;
        }
    }
}
return computerTotalScore;
}

int diceRoll(int roll)
{
    //int roll;

    roll = (int)(rand()%6)+1;

    return roll;
}

void f(int x){

int x;

// code for function body

}
