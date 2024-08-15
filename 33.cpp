// #include <iostream>
// using namespace std;
// bool isSorted(int a[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     if (a[0] > a[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool remainingPart = isSorted(a + 1, n - 1);
//     }
// }
// int main()
// {
//     int arr[] = {1, 3, 4, 6, 7, 9};
//     int size = 6;
//     bool ans = isSorted(arr, size);
//     if (ans)
//     {
//         cout << "Array is Sorted";
//     }
//     else
//     {
//         cout << "Array is not Sorted";
//     }

//     return 0;
// }
// //................................................................................................................
// #include <iostream>
// using namespace std;
// int printSum(int a[], int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return a[0];
//     }

//     return a[0] + printSum(a + 1, n - 1);
// }
// int main()
// {
//     int arr[] = {1, 3, 4, 6, 7, 9};
//     int size = 6;
//     int sum = printSum(arr, size);
//     cout << "Sum of the values inside array is: " << sum;
//     return 0;
// }
// //................................................................................................................
// #include <iostream>
// using namespace std;
// void print(int * a, int n){
//     cout<<"Size of the array is: "<<n<<endl;
//     for (int i = 0; i < n; i++)
//     {
//        cout<<a[i]<<" ";
//     }
//     cout<<"\n";

// }
// bool isSorted(int * a, int n, int k)
// {
//     print(a,n);
//     if (n == 0)
//     {
//         return false;
//     }
//     if (a[0] == k)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingPart = isSorted(a + 1, n - 1, k);
//     }
// }
// int main()
// {
//     int arr[] = {1, 3, 4, 6, 7, 9};
//     int size = 6;
//     int key = 7;
//     bool ans = isSorted(arr, size, key);
//     if (ans)
//     {
//         cout << "Element is present";
//     }
//     else
//     {
//         cout << "Element is absent";
//     }

//     return 0;
// }
//................................................................................................................
#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *a, int s, int e, int k)
{
    print(a, s, e);
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    cout<<"Value of arr mid is: "<<a[mid]<<endl;
    if (a[mid] == k)
    {
        return true;
    }
    if (a[mid] > k)
    {
        return binarySearch(a, s, mid - 1, k);
    }
    else
    {
        return binarySearch(a, mid + 1, e, k);
    }
}
int main()
{
    int arr[] = {1, 3, 4, 6, 7, 9,65,333};
    int s = 0;
    int e = 7;
    int key = 477;
    bool ans = binarySearch(arr, s, e, key);
    if (ans)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is absent";
    }

    return 0;
}