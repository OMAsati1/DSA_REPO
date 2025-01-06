// #include <iostream>
// #include <vector>
// using namespace std;

// void selectionSortRecursive(vector<int> &arr, int n, int index = 0)
// {
//     // Base case: If the entire array is sorted
//     if (index == n - 1)
//         return;

//     // Find the minimum element in the unsorted part of the array
//     int minIndex = index;
//     for (int j = index + 1; j < n; j++)
//     {
//         if (arr[j] < arr[minIndex])
//             minIndex = j;
//     }

//     // Swap the found minimum element with the first element of the unsorted part
//     swap(arr[minIndex], arr[index]);

//     // Recursively sort the remaining part of the array
//     selectionSortRecursive(arr, n, index + 1);
// }

// int main()
// {
//     vector<int> arr = {54,22,43,11,29,7};
//     int n = arr.size();

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     selectionSortRecursive(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n, int index)
{
    // Base case: If the entire array is sorted
    if (index == n)
        return;

    int j = index - 1;
    int temp = arr[index];
    while (j >= 0 && arr[j] > temp)
    {

        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
    insertionSort(arr, n, index+1);
}

int main()
{
    vector<int> arr = {54, 22, 43, 11, 29, 7};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n,1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
