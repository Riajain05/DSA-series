#include <iostream>
using namespace std;

/*void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}*/


void intersectionArray(int arr[],int arr1[],int n,int m){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i]==arr1[j]){
                cout << arr[i] << " ";
                arr1[j]=-1; 
                break;          
                }
        }
    }
}

int main(){
    
    int arr[5]={1,3,5,6};

    int brr[7]={2,6,3,8,5,2,3};

    /*cout << "intersection of two arrays are:" <<*/ intersectionArray(arr,brr,5,7);

    return 0;

}