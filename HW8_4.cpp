#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void correction (ifstream&, ofstream&);
int main()
{
  ifstream in;
  ofstream out;
  in.open("HW8_4.txt");
  out.open("HW8_4output.txt");
  if(in.fail()){
    cout<< "Input file opening failed. \n";
    exit(1);
  }
  correction (in, out);

  in.close();
  out.close();



return 0;
}

void correction (ifstream& input, ofstream& output){
  bool first = true;
  std::string command;
  while(std::getline(input, command, ';')){
    if (command.find("cin")!= std::string::npos){
        size_t pos = command.find("<<");
        while (pos != std::string::npos){
          command.replace(pos, 2, ">>");
          pos = command.find("<<", pos);
        }
      }
      else if (command.find("cout")!= std::string::npos){
        size_t pos = command.find(">>");
        while (pos != std::string::npos){
          command.replace(pos, 2, "<<");
          pos = command.find(">>", pos);
        }
      }
      if (! first){
        output << ';' << command;
      }
      else{
        first = false;
        output << command;
      }
   }
}
