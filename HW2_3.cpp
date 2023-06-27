#include <iostream>
using namespace std;
int main()
{
  for (int i=1; i<=5; i++ )
  {
    for (int j=0; j<=9; j++)
    {
      if (j==0)
        cout <<"start ";
      else if (j<=i)
        cout<< "o";
      else if (j==9)
        cout << " end"<<endl;
      else
      cout << "x";
    }

    }

  return 0;

}
