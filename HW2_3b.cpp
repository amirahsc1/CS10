#include <iostream>


using namespace std;
int main()

{
int x= 8;
  for (int i=1; i<=5; i++ )
  {
    x=x+2;
    for (int j=6; j>=0; j--)
    {
    if (j==6)
      cout << "start ";

    else if (j>0)
      cout <<x<<" "<<j<<",";

    else
      cout << " end"<<endl;
}
}
return 0;
}
