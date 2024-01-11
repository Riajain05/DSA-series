#include<iostream>
using namespace std;

int uniqueElement( int arr[],int size){
   
    int ans=0;
    for (int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    //given that array should be odd
    int arr[7]={1,2,4,6,4,2,1};
    
    cout << uniqueElement(arr , 7);
   
    return 0;

}