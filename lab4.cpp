#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;


int die(int n);

int main()
{

  int n;

  cout << "Insert the number of sides on the die: ";
  cin >> n;

	srand(time(NULL));

	int roll = die(n);

	cout << "You rolled a " << roll << endl;

	system("pause");

	return 0;
}

int die(int n)
{

  int n;

	return rand() % n + 1;

}
