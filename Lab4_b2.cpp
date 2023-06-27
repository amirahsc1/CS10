# include <iostream>
using namespace std;
int evens_between(int n, int m)
{
  int evens;
  for (int i = n; i <= m; i++){
    if(is_even(i) == true)
    {
    evens++;
    }

  }
  return evens;
}
int main(){

int firstNum, secondNum;
cout <<"Enter a number:\n";
cin >> firstNum;
cout << "Enter another number: \n";
cin >> secondNum;
cout << evens_between(firstNum, secondNum)<< endl;


return 0;
}
