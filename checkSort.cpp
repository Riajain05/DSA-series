#include <iostream>
using namespace std;

bool check(int arr[],int n){
     for (int i=1; i<n; i++ ){
        if (arr[i-1]>arr[i]){
             return 0;
        }
    }
     return 1;
}

int main(){
    int arr[8]={2,3,4,5,62,7,2,7};
    bool answer = check(arr,8);
    if(answer){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}