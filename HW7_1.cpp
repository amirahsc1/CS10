#include <iostream>

using namespace std;

struct finalGrade
{
  int quiz1= 0;
  int quiz2 = 0;
  double midterm = 0.0;
  double finalExam = 0.0;
  double average = 0.0;
  char grade = 'F';
};

void inputGrade (finalGrade& grade);
void setGrade(finalGrade& grade);

int main(){
finalGrade student;
inputGrade(student);
setGrade(student);
double quizScore;
quizScore = student.quiz2 + student.quiz1;
quizScore = (quizScore/20) * 100;
student.average = ((.25 * quizScore ) + (.25 * student.midterm) + (.50 * student.finalExam)) / 1;

cout <<"The students first quiz score: " << student.quiz1 << endl;
cout <<"The students second quiz score: " << student.quiz2 << endl;
cout <<"The students final exam score: " << student.finalExam << endl;
cout <<"The students midterm score: " << student.midterm << endl;
cout << "The students final Grade is: " << student.average << ". " << "The students letter grade is: " << student.grade;

  return 0;
}

void inputGrade (finalGrade& grade){
  cout << "Enter the score of the first quiz: ";
  cin >> grade.quiz1;
  cout << "Enter the score of the second quiz: ";
  cin >> grade.quiz2;
  cout << "Enter the score of the midterm: ";
  cin >> grade.midterm;
  cout << "Enter the score of the final exam: ";
  cin >> grade.finalExam;

}
void setGrade(finalGrade& grade){
  if (grade.average >= 90.0){
    grade.grade = 'A';
  }
  if ((grade.average >= 80.0) && ( grade.average < 90.0)){
    grade.grade = 'B';
  }
  if ((grade.average >= 70.0) && (grade.average < 80.0)){
    grade.grade = 'C';
  }
  if ((grade.average >= 60.0) && (grade.average < 70.0)){
    grade.grade = 'D';
  }
  else{
    grade.grade = 'F';
  }

}
