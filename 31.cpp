// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     //base case
//     if(n==0)
//         return 1;

//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;

//     return biggerProblem;
// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int power(int n) {

//     //base case
//     if(n == 0)
//         return 1;

//     //recursive relation
//     return 2 * power(n-1);
// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = power(n);

//     cout << ans << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// void count(int n){
//     if(n==0){
//         return;
//     }
//     count(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     count(n);
//     return 0;
// }
#include <iostream>
using namespace std;
void sayDigit(int n, string a[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigit(n, a);
    cout << a[digit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayDigit(n, arr);
    return 0;
}