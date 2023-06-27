#include <iostream>
#include <string>
using namespace std;


int main()


{
const int MAX_CHARS = 100;
char userSentence[MAX_CHARS + 1];
string replacedSentence = "";
char userChar;
int spaceCount = 0;


 cout << "Enter a Sentence: ";
cin.getline(userSentence, MAX_CHARS + 1);


 int i = 0;
while (i < MAX_CHARS && userSentence[i] != '\0'
  && userSentence[i] != '.')
{
  if (isspace(userSentence[i]) || userSentence[i] == ' ')


   spaceCount++;
  else
   spaceCount = 0;
  if (spaceCount < 2)
   replacedSentence += tolower(userSentence[i]);
  i++;
}


  if (replacedSentence.length() <= 5)
  {
   cout << "The sentence does not have 5 or more words!" << endl;
   return 0;
  }
else if (replacedSentence.length() > 0)


 {
  replacedSentence.at(0) = toupper(replacedSentence.at(0));
  if (replacedSentence[replacedSentence.length() - 1] == ' ' && replacedSentence.length() == 1)
   replacedSentence == replacedSentence;
  else if (replacedSentence[replacedSentence.length() - 1] == ' ')
   replacedSentence[replacedSentence.length() - 1] = '.';
  else if (replacedSentence.length() == MAX_CHARS)
   replacedSentence[MAX_CHARS - 1] = '.';
  else
   replacedSentence += '.';



  cout << "The user sentence: " << endl << userSentence << endl;
  cout << "The replaced sentence: " << replacedSentence << endl;
}


 return 0;


}
