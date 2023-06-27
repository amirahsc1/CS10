#include <iostream>
#include <string>
using namespace std;
int main()
{
  double gallonsToLiters;
  double gallons;


  cout <<"How many gallons are in your container:" << endl;
  cin >> gallons;
  gallonsToLiters = 3.785411784 * gallons;

  cout << "Your container contains" << gallonsToLiters <<" liters" << endl;


  return 0;
}
