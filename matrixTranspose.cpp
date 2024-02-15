#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter number of rows:";
    cin >> n;
    cout << "enter number of columns:";
    cin >> m;
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
     }

     for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
          swap(arr[i][j], arr[j][i]);
        }
     }
    cout << "transpose of matrix is:" << endl;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
     }
     return 0;
}
