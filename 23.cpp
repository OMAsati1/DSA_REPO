#include <iostream>
using namespace std;
// bool isPresent(int arr[][3], int target, int row, int col)
// {
//     for (row = 0; row < 3; row++)
//     {
//         for (col = 0; col < 3; col++)
//         {
//             if (arr[row][col] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
void rowSum(int arr[][3], int i, int j)
{
    for (i = 0; i < 3; i++)
    {
        int sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum<<" ";
    }
}
void colSum(int arr[][3], int i, int j)
{
    for (i = 0; i < 3; i++)
    {
        int sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << sum<<" ";
    }
}
int main()
{
    // int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    // int t = 5;
    // if (isPresent(arr, t, 3, 3))
    // {
    //     cout << "Element found";
    // }

    // else
    // {
    //     cout << "Element isn't found";
    // }

    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n'; 
        }
    rowSum(arr, 3, 3);
    cout<<endl;
    colSum(arr, 3, 3);

    return 0;
}