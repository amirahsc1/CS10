#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int i, j, k, n = 0, ar1, ar2, ar3, pos;
    vector<int> array1, array2, array3;

    string inname1 = "File1.txt";
    string inname2 = "File2.txt";
    string inname3 = "outfile.txt";


    cout << "Enter the first file: ";
    cin >> inname1;
    cout << endl;

    cout << "Enter the second file ";
    cin >> inname2;
    cout << endl;

    cout << "Enter the output file name." << endl;
    cin >> inname3; cout << endl;

    ifstream infile1 (inname1.c_str());
    ifstream infile2 (inname2.c_str());

    if (!infile1 or !infile2) {
        cout << "File error";
        return 0;
    }

    pos = 0; i = 0;
    while (infile1 >> i) {
        array1.resize(pos+1);
        array1[pos] = i;
        pos++;
    }

    pos = 0; i = 0;
    while (infile2 >> i) {
        array2.resize(pos+1);
        array2[pos] = i;
        pos++;
    }

    ar1 = array1.size();
    ar2 = array2.size();
    ar3 = ar1 + ar2;
    array3.resize(ar3);

    i = 0; j = 0; k = 0;
    while (i < ar1 && j < ar2) {
        if (array1[i] <= array2[j]) {
            array3[k++] = array1[i++];
        } else {
            array3[k++] = array2[j++];
        }
    }

    while (i < ar1) array3[k++] = array1[i++];
    while (j < ar2) array3[k++] = array2[j++];

    ofstream outfile (inname3.c_str());
    outfile.open(inname3.c_str());

    i = 0;
    while(i<ar3){
        outfile << array3[i] << endl;
        i++;
    }

    cout << "Contents of file " << inname1 << " are: ";
    for(i = 0; i < array1.size(); i++){
        cout << array1[i] << '\n';
    }
    cout << "Contents of file " << inname2 << " are: ";
    for(i = 0; i < array2.size(); i++){
        cout << array2[i] << '\n';
    }
    cout << "Contents of merged file, " << inname3 << " are: ";
    for(i = 0; i < array3.size(); i++){
        cout << array3[i] << '\n';
    }

    infile1.close();
    infile2.close();
    outfile.close();
    return 0;
}
