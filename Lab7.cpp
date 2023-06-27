#include <iostream>
#include <string>
using namespace std;
string encrypt (string s, int shift);

int main (){

  cout<<encrypt("cat", 3)<<endl;
  return 0;
  }

  string encrypt (string s, int shift){
      string output = s;

    for (int i=0; i < s.length(); i++) {
      output[i] = s[i] + shift;
      }

    return output;
    }



/*
s="heLlO"
for i=0, i<length(s), i++
    if(s[i]>='A' and s[i] <='Z')
        print("uppercase", s[i])
    else:
        print("lowercase", s[i])

/*


string encrypt (string s, int shift){
string output;

for (int i=0; i < s.lengh(); i++) {
out[i] = s[i] + shift;


}

return output;
}

cout<<encrypt("cat", 3)<<endl;
return 0;
}


/*
string substring(string str, int start, int length);
int search(string str, string s);
int main() {

int indexFound = search("ATGCAGAAAGCTACGATCAATGATCGATCAATGGAT", "AATG");

if (indexFound){
  cout << "Found at index: " << indexFound;
} else {
  cout << "Does not exist.";
}
return 0;
}
string substring(string str, int start, int length){
  string substring = "";
  for(int i= start; i < start + length; i++){
    substring += str[i];
  }
  return substring;
}


int search(string str, string s){
int indexFound;
string practice;
//substring(str, i, 4)
  for (int i= 0; i < str.length(); i++){
  practice = substring(str, i , 4);
    if (practice == s){
      return i;
    }
}
  return -1;
}


/*
string substring(string str, int start, int length);
int main(){

cout << substring("abracadabra", 3, 5);


  return 0;
}
string substring(string str, int start, int length){
  string substring = "";
  for(int i= start; i < start + length; i++){
    substring += str[i];
  }
  return substring;
}

*/
/* int search(string str, string s){

int indexFound;

  for (int i= 0; i < str.length(); i++){

  if (substring == s)
}
  return i;}
  return -1;}

  */
