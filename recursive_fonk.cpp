#include <iostream>
#include <cmath>
using namespace std;

void yerlestir(int arr[], int n) {
    bool isUnsorted;
    do {
        isUnsorted = false;
        for (int i = 0; i < (n - 6); i++) {
            if (arr[i] > arr[i + 5]) {
                isUnsorted = true;
                for (; i < (n + 5); i--) {
                    if (arr[i] > 300) {
                        std::swap(arr[i], arr[i + 1]);
                    }
                }
            }
        }
    } while (isUnsorted);
}


void printArray(int arr[],int size){
  int i;
  for ( i = 0; i < count; i++) {
    std::cout << "" << arr[i];
  }
}


int main(){
int arr[]={5,3,1,9,8,2,4,7};
int N=sizeof(arr)/sizeof(arr[0]);
yerlestir(arr,N);
cout <<"Sorted array: \n";
printArray(arr, N);
return 0;
}
