#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double velocity, u , angle , y, equation1, equation2, final;
int x = 0;
double gravity = 9.81;
cout << "What is the velocity?";
cin >> velocity;
cout << "What is the angle of the projectile?";
cin >> angle;
cout << "What is the intial y?";
cin >> u;

for (double y = 0; y >= 0; y++ )
{
  equation1 = u + ( x * tan(angle));
  equation2 = ( gravity * pow(x,2) ) /  ( 2 *  pow(velocity * cos(angle), 2) );
  y = equation1 - equation2;

  cout << '(' << x << ',' << y << ')' <<endl;

  x++;
  equation1 = u + ( x * tan(angle));
  equation2 = ( gravity * pow(x,2) ) /  ( 2 *  pow(velocity * cos(angle), 2) );
  y = equation1 - equation2;
}

  return 0;
}
