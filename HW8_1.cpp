#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void calculate(ifstream&, ofstream&);

int main()
{
    ifstream in;
    ofstream out;

    in.open("HW8_1.txt");

    if(in.fail()){
      cout<< "Input file opening failed. \n";
      exit(1);
    }

    out.open("HW8_1output.txt");
    calculate(in, out);
    out.close();
    in.close();

  return 0;
}

void calculate(ifstream& in, ofstream& out){
    int i, sum, a[10];
    string first, last;
    double avg;
    in >> first;
    while (in)

    {
        sum = 0;
        in >> last;
        for (i = 0; i<10; i++)
        {
            in >> a[i];
            sum += a[i];
        }

        out << first << " " << last << " ";
        for (i = 0; i<10; i++)
            out << a[i] << " ";
        avg = sum / 10.00;
        out << std::setprecision(2) << std::fixed << avg << endl;
        in >> first;
    }
}
