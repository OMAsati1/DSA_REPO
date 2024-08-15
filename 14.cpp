// #include <iostream>
// using namespace std;
// void print_Array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
// }
// int print_Pivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return e;
// }
// int main()
// {
//     int a[5] = {8, 14, 16, 1,3};
//     print_Array(a, 5);
//     cout <<"Pivot is: "<< print_Pivot(a, 5);
//     return 0;
// }
///2nd approach....................................................................................
// #include <iostream>
// using namespace std;
// void print_Array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
// }
// int print_Pivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;

//         // Check if mid is the pivot
//         if (mid < e && arr[mid] > arr[mid + 1])
//         {
//             return mid + 1;
//         }
//         if (mid > s && arr[mid] < arr[mid - 1])
//         {
//             return mid;
//         }

//         // Decide whether to go to the left half or the right half
//         if (arr[mid] >= arr[s])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }

//     return -1; // The array is not rotated
// }

// int main()
// {
//     int a[7] = {4, 5, 6, 7, 0, 1, 2};
//     print_Array(a, 7);
//     cout << "Pivot is: " << print_Pivot(a, 7);
//     return 0;
// }
//.....................................................................................................
#include <iostream>
using namespace std;
long long int sqrtInteger(int n)
{

    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {

        long long int square = mid * mid;

        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double more_Precision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    int tempSol = sqrtInteger(a);
    cout << "Answer is: " << more_Precision(a, 3, tempSol);
    return 0;
}