#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const string PUNC = ".?!,;";
int main(){
    ifstream in;
    ofstream out;
    int numWords = 0, numChars = 0;
    string word;
    in.open("HW8_3.txt");
    out.open("HW8_3output.txt");
    if(in.fail()){
      cout<< "Input file opening failed. \n";
      exit(1);
    }


    while( in >> word ){
      int len = word.size();
      if( PUNC.find( word[len-1] ) != string::npos )
          word.erase( len-1 );
      numChars += word.size();
      numWords++;
    }
    cout << "\n\nNumber of words was " << numWords
         << "\nNumber of letters was " << numChars
         << "\nAverage letters per word was "
         << double(numChars) / numWords << endl;
    in.close();

return 0;
}
