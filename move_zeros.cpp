#include <bits/stdc++.h>
using namespace std;

//brute force approch
void moveZero(int arr[],int n){
    vector<int> temp;

    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0; i<temp.size(); i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size(); i<n; i++){
        arr[i]=0;
    }
}
//optimal solution
/*vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}*/
int main(){
    int arr[10]={1,6,2,0,6,4,0,0,2,5};
    moveZero(arr,10);
    for(int i=0; i<10; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}