#include <iostream>
using namespace std;
void beans(int y, int& n, int size);
void spam(int& n, int& y);
int main(){
    int m = 7;
    int n = 4;
    int temp = 2;
    cout<<"m is "<<m<<" n is "<<n<<endl;
    beans(n, m, 3);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    spam(m, n);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    beans(m, temp, n);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    return 0;
}

void beans(int y, int& n, int size){
    y = n+size;
    n = 7+n;
}
void spam(int& n, int& y){
    int m = n+y;
    y=n;
    n=y+n;
}
