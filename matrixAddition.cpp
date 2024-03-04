#include<iostream>
using namespace std;

int main(){
    int n1,m1;
    cout<<"enter number of rows for matrix1:";
    cin >> n1;
    cout << "enter number of columns for matrix1:";
    cin >> m1;
    int mat1[n1][m1];
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin >> mat1[i][j];
        }
    }
    int n2,m2;
    cout<<"enter number of rows for matrix2:";
    cin >> n2;
    cout << "enter number of columns for matrix2:";
    cin >> m2;
    int mat2[n2][m2];
    
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            cin >> mat2[i][j];
        }
    }
    if(n1!=n2 || m1!=m2){
        cout << "Matrix addition is not possible for this input";
    }
    else{
    int mat3[n1][m1];
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout << "Addition of two given matrix is:"<< endl;
     for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cout << mat3[i][j] << " ";
        }cout << endl;
    }
}

}