#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Item
{
  string name;
  double price;
  string artist; // Artist Name
  int date[3]; // The release date
  string list[20]; // the list of tracks/chapters
  int stringsize; //The number of Tracks in list

};
double fillCart(Item a[], int size);
int main() {

	Item amazon[3];

  amazon[0].name = "Slaughterhouse 5";
  amazon[0].artist = "Kurt Vonnegut";
  amazon[0].price = 7.99;
  amazon[1].name = "Let it Be";
  amazon[1].artist = "The Replacements";
  amazon[1].price = 11.49;
  amazon[1].list[0] = {"I Will Dare"};
  amazon[1].list[1] ={"Favorite Thing"};
  amazon[1].list[2] = {"We're Comin' Out"};
  amazon[1].list[3] = {"Tommy Gets His Tonsils Out"};
  amazon[1].list[4] = {"Androgynous"};
  amazon[1].list[5] = {"Black Diamond"};
  amazon[1].list[6] = {"Unsatisfied"};
  amazon[1].list[7] = {"Seen Your Video"};
  amazon[1].list[8] = {"Gary's Got"};
  amazon[1].list[9] ={"Answering Machine"};
  amazon[1].list[9]= {"Sixteen Blue"};
  amazon[1].stringsize = 11;
  amazon[1].date[0] = {10};
  amazon[1].date[1]= {2};
  amazon[1].date[2]= {1984};
  amazon[2].name = "Let it Be";
  amazon[2].artist = "The Beatles";
  amazon[2].price = 16.29;
  amazon[2].list[0] = {"Two Of Us"};
  amazon[2].list[1] ={"Dig A Pony"};
  amazon[2].list[2]= {"Across The Universe"};
  amazon[2].list[3] ={"I Me Mine"};
  amazon[2].list[4] = {"Dig It"};
  amazon[2].list[5] = {"Let It Be"};
  amazon[2].list[6] = {"Maggie Mae"};
  amazon[2].list[7] = {"I've Got A Feeling"};
  amazon[2].list[8] = {"One After 909"};
  amazon[2].list[9] = {"The Long And Winding Road"};
  amazon[2].list[10] = {"For You Blue"};
  amazon[2].list[11] = {"Get Back"};
  amazon[2].stringsize = 12;
  amazon[2].date[0] = {5};
  amazon[2].date[1]= {11};
  amazon[2].date[2] = {1970};


  cout << "Your total cost is: " << fillCart(amazon, 3) << endl;
  cout << "Enjoy your Music!";


    return 0;
}

double fillCart(Item a[], int size){
  int counter = 0;
  double shoppingcarttotal = 0.0;
  char moreMusic;
  string correct;
  while (moreMusic != 'N' || moreMusic != 'n')
	{
    cout << "Item: " << a[counter].name << ". " << "by " << a[counter].artist << " for:  " << a[counter].price << endl;
    cout << "Would you like to purchase, see more details, or pass?" << endl;
    cin >> correct;

    if (correct == "purchase" ){
    cout << "You purchased: " << a[counter].name << " for: " << a[counter].price << endl;
    counter++;
    shoppingcarttotal = shoppingcarttotal + a[counter - 1].price;
  }
    if (correct == "details") {
      cout << "Contents: " << endl;
      for (int i = 0; i < a[counter].stringsize ; i++){
        cout<<a[counter].list[i] << ',';}
      cout << endl << "Published:  " << a[counter].date[0] << "/" << a[counter].date[1] << "/" << a[counter].date[2] << endl;
      cout << "Would you like to purchase or pass?" << endl;
      cin >> correct;
      if (correct == "purchase" ){
        cout << "You purchased: " << a[counter].name << " for: " << a[counter].price << endl;
        counter++;
        shoppingcarttotal = shoppingcarttotal + a[counter - 1].price;
      }
  }

    if (correct == "pass"){
    cout << "Current total is: " << shoppingcarttotal << " You purchased: " << endl;
    counter++;}

    cout << "Do you wish to continue viewing new music? ";
    cin >> moreMusic;

    if (moreMusic == 'N' || moreMusic == 'n'){
      break;
      return shoppingcarttotal;
    }

	}


  	return shoppingcarttotal;

}
