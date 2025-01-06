#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    // for (int k = s; k <= e; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    // cout<<"before partition"<<endl;
    
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    // for (int k = s; k <= e; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    // cout<<"after partition"<<endl;
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {43 ,595, 348, 857, 684, 94 ,108 ,542 ,732, 655, 563 ,434, 964, 92, 680,
     434, 321 ,966, 835, 774 ,65 ,984};
    int n = sizeof(arr) / 4;
    quickSort(arr, 0, n - 1);
    cout<<"final result"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}