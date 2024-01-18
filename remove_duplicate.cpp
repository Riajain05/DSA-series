#include <iostream>
using namespace std;

//we assume that array is sorted
int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=i+1; j<n; j++){
        if(arr[j]!=arr[i]){
          arr[i+1]=arr[j];
          i++;
        }
    }
    return i+1;
}

int main(){
     int arr[7]={1,1,2,2,3,3,4};
     cout << removeDuplicate(arr,7);
     return 0;
}