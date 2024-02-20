#include <iostream>
using namespace std;

void threeSum(int arr[], int n, int key)
{
    //int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n-1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    //count++;
                    cout << arr[i]<<" "<<arr[j]<<" "<< arr[k];
                    cout << endl;
                }
            }
        }
    }
   
}

int main()
{
    int target;
    cout << "enter the target:";
    cin >> target;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    threeSum(arr, 6, target);

    return 0;
}