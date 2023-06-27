#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct StudentInfo{
  string firstName;
  string lastName;
  string classLevel;
  double gpa;
};


int main(){
  double temp;
  string temp1;
  int i = 0;

  StudentInfo StudentList[100];
  ifstream input;
  input.open("lab9studentinfo.txt");
  if(input.fail()){
    cout<< "Input file opening failed. \n";
    exit(1);
  }

  while(input >> temp1){
    StudentList[i].firstName = temp1;
    input >> temp1;
    StudentList[i].lastName = temp1;
    input >> temp1;
    StudentList[i].classLevel = temp1;
    input >> temp;
    StudentList[i].gpa = temp;
    i++;
  }









  return 0;
}




















/*
double average(double arr[], int size);

int main(){
  double scores[1000];
  ifstream input;
  input.open("lab9scores.txt");
  if(input.fail()){
    cout<< "Input file opening failed. \n";
    exit(1);
  }
  double temp;
  int size=0;

  while(input >> temp){
    scores[size] = temp;
    size ++;
  }

cout << average(scores, size)<< endl;

  ofstream output;
  output.open("lab9of.txt");
  if(output.fail()){
    cout<< "Output file opening failed. \n";
    exit(1);
  }

  double avg = average(scores, size);
  output << avg << endl;
  for(int i=0; i < size; i++){
    if(scores[i] > avg){
      output << scores[i] << endl;
    }
  }

return 0;
}

double average(double arr[], int size){
    double total=0;
    for(int i=0; i<size; i++){
        total=total+arr[i];
    }
    return total/size;
}
*/
