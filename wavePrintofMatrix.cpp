#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter number of rows:";
    cin >> n;
    cout << "enter number of columns:";
    cin >> m;
    int arr[n][m];
    cout << "enter the element of matrix"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "matrix elemets are:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
     }
     cout << "printing wave print of matrix"<<endl;
     for(int col=0; col<m; col++){
        if(col%2==0){
            for(int row=0; row<n; row++){
                cout << arr[row][col] <<" ";
            }
        }
            else{
                for(int row=n-1; row>=0; row--){
                    cout << arr[row][col]<<" ";
                }
            }
          
        }
     
}