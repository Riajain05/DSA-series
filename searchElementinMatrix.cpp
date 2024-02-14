#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter number of rows:";
    cin >> n;
    cout << "enter number of columns:";
    cin >> m;
    int arr[n][m];
    
    cout << "enter element for matrix:"<< endl;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"Printing Matrix:"<<endl;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter element to be searched:";
    cin >> target;
     bool flag=false;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==target){
              cout << "element found at " <<i<<" row and "<<j<<" column" << endl;
               flag=true;
           }
        }
       
    }
    
    if(flag){
        cout<< "element found";
    }
    else{
        cout << "element not found";
    }

}