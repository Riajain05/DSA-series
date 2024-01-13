#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(int arr[], int n, int d){
    d=d%n;
    int temp[d];
    for (int i=0; i<d; i++){
        temp[i]=arr[i];
    }
    for (int i=d; i<n; i++){
        arr[i-d]=arr[i];
    }
    int j=0;
    for (int i=n-d; i<n; i++){
        arr[i]=temp[j];
        j++;
    }
}

int main(){
  int size;
  cout << "enter size:";
  cin >> size;
  int arr[100];
  int D;
  cout << "enter D:";
  cin >> D;
  cout << "enter element of array:";

  for (int i=0; i<size; i++){
    cin >> arr[i];
  }
  rotateArray(arr,size,D);
  printArray(arr,size);
  return 0;
    }