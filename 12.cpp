#include <iostream>
using namespace std;
int binary_Search(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}   
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int index1 = binary_Search(even, 6, 12);
    cout << "Index of 12 is: " << index1 << endl;
    int index2 = binary_Search(odd, 5, 11);
    cout << "Index of 11 is: " << index2 << endl;
    return 0;
}