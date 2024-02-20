#include <iostream>
using namespace std;

secondLargest(int arr[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int max2 = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

int main()
{
    int arr[6] = {2, 5, 7, 9, 3, 21};
    cout << secondLargest(arr, 6);
    return 0;
}