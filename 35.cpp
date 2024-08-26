#include <iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e, int *aux)
{

    // Copy the subarray into auxiliary array
    for (int i = s; i <= e; i++)
    {
        aux[i] = arr[i];
    }
    for (int a = 0; a < e; a++)
    {
        cout << aux[a] << " ";
    }
    cout << '\n';

    int i = s;       // starting index for left subarray
    int j = mid + 1; // starting index for right subarray
    int k = s;       // starting index to merge in original array

    // Merge the two subarrays into original array
    while (i <= mid && j <= e)
    {
        if (aux[i] <= aux[j])
        {
            arr[k++] = aux[i++];
        }
        else
        {
            arr[k++] = aux[j++];
        }
    }

    // Copy the remaining elements of the left subarray, if any
    while (i <= mid)
    {
        arr[k++] = aux[i++];
    }

    // Copy the remaining elements of the right subarray, if any
    while (j <= e)
    {
        arr[k++] = aux[j++];
    }
}

void mergeSort(int *arr, int s, int e, int *aux)
{
    // cout<<"okay"<<endl;
    // Base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // Sort the left part
    mergeSort(arr, s, mid, aux);

    // Sort the right part
    mergeSort(arr, mid + 1, e, aux);

    // Merge the two parts
    merge(arr, s, mid, e, aux);
}

int main()
{

    int arr[] = {3, 7, 0, 1, 5, 8};
    int n = 6;

    // Create an auxiliary array to be used in merge process
    int aux[n];

    mergeSort(arr, 0, n - 1, aux);
    cout << "done" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// .........................................................................
// #include <iostream>
// using namespace std;

// void merge(int *arr, int s, int e)
// {

//     int mid = (s + e) / 2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     // copy values
//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     }

//     // merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;
// }

// void mergeSort(int *arr, int s, int e)
// {

//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     int mid = (s + e) / 2;

//     // left part sort karna h
//     mergeSort(arr, s, mid);

//     // right part sort karna h
//     mergeSort(arr, mid + 1, e);

//     // merge
//     merge(arr, s, e);
// }

// int main()
// {

//     int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
//     int n = 15;

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }