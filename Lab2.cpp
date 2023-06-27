#include <iostream>
# include <string>
using namespace std;

int main()
  {
  string Fparent;
  string Sparent;
  string tableA = "GG: 50% Gg: 50%, gg: 0%";
  string tableB = "GG: 0%, Gg: 100%, gg:0%";
  string tableC = "GG: 0%, Gg: 0%, gg:100%";
  string tableD = "GG: 0%, Gg: 100%, gg:0%";
  string tableE = "GG: 0%, Gg: 50%, gg:50%";
  cout << "What is the genotype of the first parent?";
  cin>>Fparent;
  cout<<"What is the genotype of the second parent?";
  cin>> Sparent;
  if ((Fparent == "GG") && (Sparent == "Gg")){
    cout<<tableA;
  }
  else if ((Fparent == "GG") && (Sparent == "gg")){
    cout<<tableB;
  }
  else if ((Fparent == "gg") && (Sparent == "gg")){
    cout<<tableC;
  }

  else if ((Fparent == "gg") && (Sparent == "Gg")) {
    cout<<tableD;
  }
  else if ((Fparent == "GG") && (Sparent == "GG")){
    cout<<tableE;
  }
