#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

struct item{
  string name; //
  string artist; // Artist Name
  double price; // The price of the item
  string str1[];
  string str3[];
  string str3[];
  int date; // The release date
  string list[20]; // the list of tracks/chapters
  int stringsize; //The number of Tracks in list
  string finalArray[3];
  char ans;// once a key is pressed move on to the next in the array
  string conintue; // where pass , details, and purshase will be stored


};
void printItem(item finalItem);
void initialize(item& myItem);
double fillCart(Item a[], int size);
int main(){
item amazon;

initialize(amazon);
printItem(amazon);
fillCart(Item amazon, 3);
Item amazon[3] = {
  // amazon[] = {str1, str2, str3};
  //str1[] = {amazon.name, amazon.artist, amazon.price , amazon.list[], amazon.stringsize, amazon.date[]}
  {"Slaughterhouse 5", "Kurt Vonnegut", 7.99},
  // array 0f 6. Song Title -> Artist -> Price -> Tracks -> Track Siz -> Date
  {"Let it Be", "The Replacements", 11.49,{"I Will Dare", "Favorite Thing", "We're Comin' Out",
  "Tommy Gets His Tonsils Out","Androgynous","Black Diamond","Unsatisfied",
  "Seen Your Video","Gary's Got","Sixteen Blue","Answering Machine"},
  11, {10, 2, 1984}},
  {"Let it Be", "The Beatles", 16.29,
  {"Two Of Us", "Dig A Pony","Across The Universe",
  "I Me Mine","Dig It","Let It Be","Maggie Mae","I've Got A Feeling","One After 909",
  "The Long And Winding Road","For You Blue","Get Back"}, 12, {5, 11, 1970}}};


return 0;
}


void printItem(Item finalItem, Item a[], int size ){
  for (int j = 0; j < size ; j++){
    cout << a.str1

    cout << "Item: " << finalItem.name << ". " << "by " << finalItem.artist << "for "
    << finalItem.price << endl;
    cout << "Contents: " <<
    for (int i = 0; i < finalItem.stringsize ; i++)
      cout<<finalItem.list[i] << ',' <<endl;
    cout << "Published:  " << finalItem.date[0] << "/" << finalItem.date[1] << "/" << finalItem.date[2] << endl;
}

a.str[] = {a.name, a.artist, a.price , a.list[], a.stringsize, a.date[]};
a.finalArray[] = {a.str1[], a.str2[], a.str3[]};
}

double fillCart(Item a[], int size){
  for (int i = 0; i < size; i++){
    if(a[].continue == "pass"){

    }
    if (a[].conintue == "detials"){
      cout << a.
    }
  }

}
