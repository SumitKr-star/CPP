#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }

        if(key < arr[mid])
        {
            return binarySearch(arr, low, mid - 1, key);
        }

        return binarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;

    int result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
    {
        cout << "Element found at position " << result;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}

