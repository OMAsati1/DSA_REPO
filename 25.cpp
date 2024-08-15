#include <iostream>
using namespace std;

int main()
{
    // int num = 5;
    // int *p = &num;
    // double num1 = 5.76;
    // double *ptr = &num1;
    // cout << num << endl;
    // // its address
    // cout << &num << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << (*ptr + 1.27) << endl;
    // cout << sizeof(p) << endl;
    // cout << sizeof(num) << endl;
    // cout << sizeof(ptr) << endl;
    //,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
    // int *p=0;
    // cout<<*p<<endl;
    // int i=7;
    // int *p=0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // int num = 9;
    // int a = num;
    // a++;
    // cout << num << endl;
    // int *p = &num;
    // cout << num << endl;
    // (*p)++;
    // cout << num << endl;
    // cout << p<< endl;

    // int * q=p;
    // cout<<q<<"\n"<<*q<<endl;
    int i = 6;
    int *j = &i;
    cout << (*j)++ << endl;
    cout << (*j) << endl;
    cout << j << endl;
    j--;
    cout << j << endl;
    cout << sizeof(j) << endl;

    return 0;
}