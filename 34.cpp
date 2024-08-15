// #include<iostream>
// using namespace std;
// void reverse(string & str,int i, int j){
//     cout<<"call recieved for "<<str<<endl;
//    if (i>j)
//     return;
//     swap(str[i],str[j]);
//    i++;
//    j--;
//    reverse(str,i,j);

// }
// int main(){
//     string name="asdfghjkl";
//     cout<<name<<endl;
//     reverse(name,0,name.length()-1);
//     cout<<name<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void reverse(string & str,int i){
//     int n= str.length();
//     cout<<"call recieved for "<<str<<endl;
//    if (i>n-i-1)
//     return;
//     swap(str[i],str[n-i-1]);
//    i++;
//    reverse(str,i);

// }
// int main(){
//     string name="abcdef";
//     cout<<name<<endl;
//     reverse(name,0);
//     cout<<name<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// bool checkPalidrome(string &str, int i)
// {
//     int n = str.length();
//     if (i > n - i - 1)
//         return true;

//     if (str[i] != str[n - i - 1])
//         return false;

//     else
//     {
//         return checkPalidrome(str, ++i);
//     }
// }
// int main()
// {
//     string name = "abbccbba";
//     bool k = checkPalidrome(name, 0);
//     if (k)
//     {
//         cout << name << " is palidrome.";
//     }
//     else
//     {
//         cout << name << " is not palidrome.";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     if (b == 1)
//         return a;
//     int ans = power(a, b / 2);
//     if (b & 1)
//         return a * ans * ans;
//     else
//     {
//         return ans * ans;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << "Ans is: " << power(a, b);
//     return 0;
// }
#include <iostream>
using namespace std;
void bubbleSort(int *a, int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // One pass of bubble sort. After this pass, the largest element is moved to the end.
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }

    // Recursive call for the remaining array
    bubbleSort(a, n - 1);
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array before sorting
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';

    // Perform bubble sort
    bubbleSort(arr, n);

    // Print the array after sorting
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}