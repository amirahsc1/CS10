# include <iostream>
# include <cmath>
using namespace std;

double force(int parameterMass1, int parameterMass2, double parameterDistance);

int main()
{

double oneMass, twoMass, distance, final;
cout << "What is the mass of the 1st object?\n";
cin >> oneMass;
cout << "What isthe mass of the 2nd object?\n";
cin >> twoMass;
cout << "What is the distance between the two?\n";
cin >> distance;

final = force(oneMass,twoMass, distance);
cout << " The gravitational force between the two objects is"
<< final<< " dynes\n";

return 0;
}

double force(int parameterMass1, int parameterMass2, double parameterDistance)
  {
    const double GRAVITY_CONSTANT = 6.673e-8;
    double solution = (GRAVITY_CONSTANT * parameterMass1 * parameterMass2) / (pow(parameterDistance,2));
    return (solution);
  }
