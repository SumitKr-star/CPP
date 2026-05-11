#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 40;

    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Element found at position " << mid;
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
