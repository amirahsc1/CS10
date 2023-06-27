#include<iostream>
using namespace std;

int main()
{
	double finalWeight, percentOfSweetener, sweetnerPerOunce, mouseSoda, mouseWeight;
	int maxSoda;
  const double ONECAN = 12.0;
  const double SWEETENER = 0.001;

	cout << "How many ounces of soda did the mouse drink before dying?: ";
	cin >> mouseSoda;
	cout << "How many ounces did the mouse weigh before dying?: ";
	cin >> mouseWeight;
	cout << "How much will you weigh after your diet?: ";
	cin >> finalWeight;

	percentOfSweetener = mouseSoda / mouseWeight;
	maxSoda = finalWeight * percentOfSweetener;

	sweetnerPerOunce = SWEETENER * ONECAN;

  cout << "You can drink:" << (maxSoda/sweetnerPerOunce) << " cans of soda without dying." << endl;

	return 0;
}
