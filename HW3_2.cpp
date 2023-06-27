# include <iostream>
# include <cmath>
# include <cstdlib>
using namespace std;

double windChill(int parameterspeed, int parametertemp);

int main()
{

double speed, temp, final;
cout << "What is wind in m/sec?\n";
cin >> speed;
cout << "What is the tempature in degrees Celsius?\n";
cin >> temp;
  if (temp <= 10){
    cout << "Tempature is too low";
    exit(1);

  }
//cout << "What is the distance between the two?\n";
//cin >> distance;

final = windChill(speed, temp);
cout << "The wind chill index is:  "
<< final << " degrees Celsius\n";

return 0;
}

double windChill(int parameterspeed, int parametertemp)
  {
    double solution = (33 - (((10 * sqrt(parameterspeed)) - (parameterspeed + 10.5)*(33-parametertemp))) / 23.1);
    return (solution);
  }
