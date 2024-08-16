// #include <iostream>
// #include <limits.h>
// using namespace std;
// int print_max(int arr[], int size)
// {
//     int a = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         a = max(a, arr[i]);
//     }
//     return a;
// }
// int print_min(int arr[], int size)
// {
//     int b = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         b = min(b, arr[i]);
//     }
//     return b;
// }
// int main()
// {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int num[50];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "Maximum value is: " << print_max(num, n) << endl;
//     cout << "Minimum value is: " << print_min(num, n) << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void update(int arr[], int n)
// {
//     cout << "Inside the function" << endl;
//     arr[0]=120;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
//     cout << "Going back to function" << endl;
// }
// int main()
// {
//     int arr[3] = {1, 2, 3};
//     update(arr, 3);
//     cout<<endl;
//     cout << "Printing in main function" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;

//     return 0;
// }
//..............................................................................................
// #include<iostream>
// using namespace std;
// int sum(int a[], int n){
//     int total=0;
//   for (int i = 0; i < n; i++)
//   {
//    total+=a[i];
//   }
//   return total;
// }
// int main(){
//     int arr[5]={34,45,78,23,97};
//     cout<<sum(arr,5);
//     return 0;
// }
//...................................................................................................................
// #include <iostream>
// using namespace std;
// bool search(int arr[], int n, int key)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == key)
//     {
//       return 1;
//     }
//   }
//   return 0;
// }
// int main()
// {
//   int key;
//   cout << "Enter the key: ";
//   cin >> key;
//   int array[10] = {23, 56, 3, -3, -56, 2, 54, 33, 18, 78};
//   bool found = search(array, 9, key);
//   if (found)
//   {
//     cout << "key is present " << endl;
//   }

//   else
//   {
//     cout << "key is absent" << endl;
//   }

//   return 0;
// }
//...................................................................................................................
#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  for (int i = 0; i < n; i++)
  {
    if (s <= e)
    {
      swap(arr[s],arr[e]);
      s++;
      e--;
    }
    // else
    // {
    //   break;
    // }
  }
}
int main()
{
  int size;
  cout<<"Enter size of array: ";
  cin >> size;
  int array[size];
  cout<<"Enter input of array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  reverse(array, size);
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }

  return 0;
}