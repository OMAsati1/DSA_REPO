// #include <iostream>
// #include <algorithm>
// using namespace std;
// void Print_array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<"\n";
// }
// void Swap_Alternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i+=2)
//     {
//         if (i+1<size)
//         {
//            swap(arr[i],arr[i+1]);
//         }

//     }
// }
// int main()
// {
//   int odd[9]={2,5,-7,23,86,12,71,-41,67};
//   Print_array(odd,9);
//   Swap_Alternate(odd,9);
//   Print_array(odd,9);
//     cout<<"\n";
//     cout<<"\n";
//   int even[8]={26,49,-6,87,33,-77,23,90};
//   Print_array(even,8);
//   Swap_Alternate(even,8);
//   Print_array(even,8);
//     return 0;
// }
//...................................................................................................
// #include<iostream>
// #include <limits.h>
// using namespace std;
// int intersection(int arr1[], int arr2[], int size1 , int size2){
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             if (arr1[i]==arr2[j])
//             {
//                 cout<<arr1[i]<<" ";
//                 int arr2[j]= {INT_MIN};
//                 break;
//             }

//         }

//     }

// }
// int main(){
//     int a1[6]={2, 6, 8 ,5, 4 ,3};
//     int a2[4]={2, 3, 4, 7};
//     intersection( a1, a2, 6,4);

//     return 0;
// }
//...................................................................................................
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void print_Array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
// }
// void sort_Array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int s = i;
//         int e = n - 1;
//         while (s < e)
//         {
//             if (s < e && arr[s] == 0)
//             {
//                 s++;
//             }
//             else if (s < e && arr[e] == 1)
//             {
//                 e--;
//             }
//             else
//             {
//                 swap(arr[s], arr[e]);
//             }
//         }
//     }

//     print_Array(arr, 10);
// }
// int main()
// {
//     int a[10] = {1, 0, 1, 0, 0, 1, 1, 1, 0, 0};
//     print_Array(a, 10);
//     sort_Array(a, 10);
//     return 0;
// }
//...................................................................................................
#include <iostream>
#include <algorithm>
using namespace std;
void print_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
}
void sort_Array(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    // Count the number of 0s and 1s
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    // Fill the array with 0s
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    // Fill the rest of the array with 1s
    for (int i = count0; i <  (count0+count1) ; i++)
    {
        arr[i] = 1;
    }
    // Fill the rest of the array with 2s
    for (int i = (count0+count1); i <  n ; i++)
    {
        arr[i] = 2;
    }

}
int main()
{
    int a[13] = {1,2, 0, 1,2, 0, 0, 1, 1,2, 1, 0, 0};
    print_Array(a, 13);
    sort_Array(a, 13);
    print_Array(a, 13);
    return 0;
}