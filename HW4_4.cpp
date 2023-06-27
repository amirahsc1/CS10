#include <iostream>

using namespace std;


double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);

int main()
{

    int minutes=0,seconds=0;
    double kph=0;
    char ans = 'y';

    while(ans=='Y'||ans=='y'){
        cout<<"Enter minutes: ";
        cin>>minutes;
        cout<<endl<<"Enter seconds: ";
        cin>>seconds;

        cout<<endl<<"Miles per Hour is: "<<
              convertToMPH(minutes,seconds)<<endl<<endl;

        cout<<"Enter kilometers per hour: ";
        cin>>kph;
        cout<<endl<<"Miles per Hour is: "<<
              convertToMPH(kph)<<endl;

        cout<<"Test again?(y/n) ";
        cin>>ans;
        cout<<endl;

    }

    return 0;
}

double convertToMPH(int minutes, int seconds)
{
    double totalMins=minutes+(seconds/60.0);
    return(60.0/totalMins);

}

double convertToMPH(double kph)
{
    const double milesToKM =1.61;
    return(kph/milesToKM);
}
