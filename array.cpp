#include <iostream>
using namespace std;

// array with function
void printArray(int arr[], int size)
{

    // printing an array
    cout << endl<< "printing an array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done!!!";
}

int main()
{

    // declaration
    int number[15];

    // accesing an array
    cout << "value at 1 index:" << number[1] << endl; // print garbage value

    // we are trying to access the location which is not available in array
    // cout << "value at 15 index:" << number[15] << endl; // generate eror

    // initializing an array
    int second[3] = {5, 6, 7};

    // accessing an element
    cout << "value at 1 index:" << second[1] << endl;

    int third[15] = {2, 3};

    // printing an array
    cout << "printing an array" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << third[i] << " ";
    }

    // initializing all location with zero
    int fourth[10] = {0};

    // printing an array
    cout << endl
         << "printing an array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << fourth[i] << " ";
    }
    // initializing all location with 1 [not possible with below line]
    int fifth[10] = {1};

    // printing an array
    cout << endl
         << "printing an array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << fifth[i] << " ";
    }

    // printing using function
    int sixth[15];
    printArray(sixth, 15);

    //size of array 
    int sixthsize= sizeof(sixth);
    cout << endl << sixthsize << endl;
    //if we want to calculate no. of location then we use below formula

    int sixthsize1 = sizeof(sixth)/sizeof(int);
    cout<< sixthsize1;

    char ch[3]={'a','b','c'};
    cout<<endl << ch[2] <<;
    
    // we cannot use printSrray function to print this aaray because it take aaray of integer type
    
    //printing an array
    cout<<endl<<"printing an array" << endl;
    for (int i=0; i<3; i++){
        cout << ch[i] <<" ";
    }
return 0;
}