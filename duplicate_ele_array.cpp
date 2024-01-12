#include <iostream>
using namespace std;

/*int duplicateElement(int arr[],int n){

    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}*/
int duplicateElement(int arr[],int n){
    int ans =0;
    for (int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    for (int i=1; i<n; i++){
        ans = ans^1;
    }
    return ans;
}

int main(){
    /*int arr[6]={4,3,6,8,4,2};
    cout<< "duplicate elemnts in an array is:"<<duplicateElement(arr,6) << endl;
    int brr[5]={1,4,2,7,8};
    cout<< "duplicate elemnts in an array is:"<<duplicateElement(brr,5)<<endl;
    int crr[8]={1,2,3,4,5,6,4,2};//if duplicate are more this will not providung right output
    cout<< "duplicate elemnts in an array is"<<duplicateElement(crr,8);*/
    int drr[6]={1,2,3,4,5,4};
    cout <<"duplicate element in an array is:"<<duplicateElement(drr,6);
    return 0;
}