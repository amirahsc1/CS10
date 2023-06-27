#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void calculate(ifstream& input, ofstream& output);
void placeOutput(ifstream& input, ofstream& output);

int main()
{
  ifstream in;
  ofstream out;
  in.open("HW8_2.txt");
  out.open("HW8_2output.txt");
  if(in.fail()){
    cout<< "Input file opening failed. \n";
    exit(1);
  }
  calculate(in, out);
  in.close();
  out.close();
  in.open("HW8_2output.txt");
  out.open("HW8_2.txt");
  if(in.fail()){
    cout<< "Input file opening failed. \n";
    exit(1);
  }
  placeOutput(in, out);

  return 0;
}

void calculate(ifstream& input, ofstream& output){
  char firstName[31], lastName[31];
  int score;
  double avg = 0;
  output.setf(ios::showpoint);
  output.setf(ios::fixed);
  output.precision(2);

  output << "This file will contain the First Name, Last Name, and the Quiz scores of student. "
         << "It will also contain the average." << endl;
  while (input >> firstName >> lastName){
    output << firstName << " " << lastName << " ";
    int scoresRemain = 1;
    char temp;
    while(scoresRemain && !input.eof()){
      input >> temp;
      if (('0' <= temp) && (temp <= '9')){
        input.putback(temp);
        input >> score;
        output << score << " ";
        avg = avg + score;
    }
    else
    {
      input.putback(temp);
      scoresRemain = 0;
    }
  }
  avg = avg / 10;
  output << avg << endl;
  }
  
}

void placeOutput(ifstream& input, ofstream& output){
  char temp;
  while(input.get(temp))
    output << temp;
}
