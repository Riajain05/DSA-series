#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    for (int i=0;i<size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int number[8]={3,23,67,87,45,34,23,89};
    int key;
    cin >> key;

    bool found = linearSearch(number,8,key);
    if(found){
        cout << "number is found in array";
    }
    else{
        cout << "number is not found in array";
    }
    return 0;
}