#include <iostream>
using namespace std;
void print_Array(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}
int first_position(int arr[], int size, int k)
{
  int s = 0;
  int e = size - 1;
  int mid = s + ((e - s) / 2);
  int ans = 0;
  while (s <= e)
  {
    if (arr[mid] == k)
    {
      ans = mid;
      e = mid - 1;
    }
    else if (k > arr[mid])
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = (s + e) / 2;
  }
  return ans;
}
int last_position(int arr[], int size, int k)
{
  int s = 0;
  int e = size - 1;
  int mid = s + ((e - s) / 2);
  int ans = 0;
  while (s <= e)
  {
    if (arr[mid] == k)
    {
      ans = mid;
      s = mid + 1;
    }
    else if (k > arr[mid])
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = (s + e) / 2;
  }
  return ans;
}
int main()
{
  int even[9] = {2, 4, 6, 12, 12, 12, 12, 12, 18};
  cout << "For array: ";
  print_Array(even, 9);
  int index1 = first_position(even, 9, 12);
  int index2 = last_position(even, 9, 12);
  cout << "First Index of 12 is: " << index1 << endl;
  cout << "Last Index of 12 is: " << index2 << endl;
  int odd[5] = {3, 8, 14, 14, 16};
  cout << '\n';
  cout << "For array: ";
  print_Array(odd, 5);
  int index3 = first_position(odd, 5, 14);
  int index4 = last_position(odd, 5, 14);
  cout << "First Index of 12 is: " << index3 << endl;
  cout << "Last Index of 12 is: " << index4 << endl;
  return 0;
}
