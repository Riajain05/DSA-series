#include <iostream>
using namespace std;
// condition of Bs--element should be in monotonic function(increasing or decreasing)
int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // also write mid=(start+end)/2

    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }
        //move to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        //move to left paart
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 7, 11, 13, 15};
    
    int evenindex = binarySearch(even,6,20);
    int oddindex = binarySearch(odd,5,11);

    cout<<"index of element is:"<<evenindex <<endl;
    cout<<"index of element is:"<<oddindex <<endl;


    return 0;
}