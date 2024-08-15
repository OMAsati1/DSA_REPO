#include <iostream>
using namespace std;
void pointer(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
     p = p + 1; // kuch change nhi hoga
    *p = *p + 1;
}
int getSum(int arr[], int size){
    int sum=0;
    cout<<sizeof(arr)<<endl;
    for (int i = 0; i < size; i++)
    {
       sum+=i[arr];
    }
    return sum;
    
}
int main()
{
    // int arr[10] = {1, 25, 3, 41, 5, 6};
    // cout << 2 [arr] << endl; // we can print any value of array by using this format
    // cout << arr[0] << endl;
    // cout << &arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr << endl;
    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(1 + arr) << endl; // same as above exmaple
    // // so arr[i]=(arr+i) and i[arr]=(i+arr)
    // int *p = &arr[5];
    // cout << sizeof(arr[0]) << endl;
    // cout << sizeof(*arr) << endl;
    // cout << sizeof(&arr) << endl;
    // cout << sizeof(arr) << endl;
    // cout << sizeof(p) << endl;
    // cout << &p << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // // arr=arr+1; -> this will show error
    // p=p+1;
    // cout<<p;
    // char arr[6] = "abcde";
    // int a[4] = {1, 65, 78, 23};
    // cout << arr << endl;
    // cout << a << endl;
    // int *p = &a[3];
    // char *c = &arr[0];
    // cout << p << endl;
    // cout << c << endl;
    // int a = 6;
    // int *s = &a;
    // pointer(s);
    // cout << *s << endl;
    // update(s);
    // cout << *s << endl;
    int ar[6]={1,2,4,5,8,9};
    cout<<getSum(ar,6);
    return 0;
}