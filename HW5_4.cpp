#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE =50;


void fill(int a[],int& numberUsed);
bool search(int countArray[],int numberUsed, int target, int& target);
void findValue(const int a[],int countArray[][2],int numberUsed, int& uniqueEntry);
void sort(int countArray[][2],int uniqueEntry);
void swapValues(int& v1, int& v2);
int iOfLargest(int countArray[][2],int starti, int uniqueEntry);

int main()
{
    int numberUsed=0,uniqueEntry=0;
    int a[MAX_MAX_SIZE]={0};

    fill(a,numberUsed);

    int countArray[numberUsed][2]={0};

    findValue(a,countArray,numberUsed,uniqueEntry);
    sort(countArray,uniqueEntry);

   for(int i=0;i<uniqueEntry;i++){
         for(int j=0;j<2;j++){
             //cout<<setw(5);
             cout<<countArray[i][j];
         }
         cout<<endl;
    }
    return 0;
}

void fill(int a[],int &numberUsed)
{
    cout<<"You may enter up to "<<MAX_SIZE<<" numbers.\n";
    int next=0,i=0;
    char ans='y';

    while((i<MAX_SIZE)&&(ans=='y'||ans=='Y'))
    {
        cout<<"Enter a number:";
        cin>>next;
        a[i]=next;
        i++;
        numberUsed+=1;
        cout<<"\nDo you want to input another #? (y/n): ";
        cin>>ans;
    }
}

bool search(int countArray[][2], int numberUsed, int target, int& target)
{
    int i=0;
    bool found=false;
    while((!found)&&(i<numberUsed)){
        if(target==countArray[i][0]){
            found=true;
            target=i;
        }
        else i++;
    }
    return found;
}

void findValue(const int a[],int countArray[][2],int numberUsed,int& uniqueEntry)
{
    int i=0,i=0;
    bool flagZero=false;
    while(i<numberUsed)
    {
        int target=0;
        if((search(countArray,numberUsed,a[i],target)==0))
        {
            countArray[i][0]=a[i];
            countArray[i][1]+=1;
            i++;
            uniqueEntry+=1;

        }
        else if(search(countArray,numberUsed,a[i],target)==1)
        {
            if((a[i]==0) && (flagZero==false)){
                flagZero=true;
                 countArray[target][1]+=1;
                 i++;
                 uniqueEntry+=1;
            }
            else{countArray[target][1]+=1;}
        }
        i++;
    }
}


void sort(int countArray[][2], int uniqueEntry)
{
    int iOfNextLargest=0;

    for(int i=0;i<uniqueEntry;i++){
        iOfNextLargest=iOfLargest(countArray,i,uniqueEntry);
        swapValues(countArray[i][0],countArray[iOfNextLargest][0]);
         swapValues(countArray[i][1],countArray[iOfNextLargest][1]);
    }
}

void swapValues(int &v1, int &v2)
{
    int temp;

    temp =v1;
    v1=v2;
    v2=temp;
}


int iOfLargest(int countArray[][2], int starti, int uniqueEntry)
{
    int max=countArray[starti][0],iOfLarge=starti;
    for(int i=starti+1;i<uniqueEntry;i++){
        if(countArray[i][0]>max){
            max= countArray[i][0];
            iOfLarge=i;
        }
    }

    return iOfLarge;
}
