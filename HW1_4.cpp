#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a, b, c; //its "double"
  b = 2; //the varible is first then the value
  cout << "Enter length of hypotenuse"<<endl;
    cin>>c; // Only one set of ">>" are needed
  cout<<"Enter length of a side"<< endl; //'>>' in wrong direction
    cin>>a;
  double intermediate = pow(c, 2)-pow(a, 2);
  b = sqrt(intermediate);
  cout<<"Length of other side is:" << b <<endl;
  //the comannd for end line is "endl" and b should
  //sandwitch between two "<<"

return 0;
}
