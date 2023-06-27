#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void deleteRepeats(char arr[], int &arrayIndex);
void fill(char arr[], int size, int &arrayIndex);
void swapValues(char &v1, char &v2);
const int ARRAY_MAX = 20;
int main(){
  int arrayIndex;
  char testArr[ARRAY_MAX];
  char ans = 'y';

  fill(testArr, ARRAY_MAX, arrayIndex);
  deleteRepeats(testArr, arrayIndex );

  for (int i = 0; i < arrayIndex; i++){
    cout << testArr[i] << endl;
  }




return 0;
}
void fill(char arr[], int size, int &arrayIndex){
  char currentValue;
  for (int i = 0; i < size; i++){
    cout << "Pick characters to place in your array"
    <<" When youve finished inputing characters, press, '!'"
    << endl;
    cin >> currentValue;
    arr[i] = currentValue;
    arrayIndex = i;
    if (arr[i] == '!'){
      break;
    }
  }

}

void deleteRepeats(char arr[], int &arrayIndex){
  int j = 0;
  int deleteCount = 0;
  for (int i = 0; i < arrayIndex; i++){
    for(int j = i + 1; j < arrayIndex; j++ ){
        if (arr[i] == arr[j]){
          arr[j] = '\0';
          deleteCount = deleteCount + 1;
        }

      }
      for (int repeat = 1; repeat < arrayIndex; repeat++ ){
        if (arr[repeat] == '\0')
          swapValues(arr[repeat], arr[repeat-1]);
        if (arr[repeat-1]== '\0')
          swapValues(arr[repeat-1], arr[repeat]);
      }
      arrayIndex = arrayIndex - deleteCount;
    }
}

void swapValues(char &v1, char &v2)
{
    char temp='a';
    temp=v2;
    v2=v1;
    v1=temp;
}
