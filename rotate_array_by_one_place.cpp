#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(int arr[],int n){
    int temp=arr[0];
    for (int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    
    int arr[5]={3,4,5,6,7};
    rotateArray(arr,5);
    printArray(arr,5);
    return 0;
    
}
