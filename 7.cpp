// #include<iostream>
// #include <limits.h>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     int ans=0;
//     cin>>n;
//     while (n!=0)
//     {
//         int d= n%10;
//         if ((ans>INT_MAX || ans>INT_MIN))
//         {
//             return 0;
//         }

//         ans=(ans*10)+d;
//         n/=10;
//     }
//     cout<<ans;
//     return 0;
// ..................................................................................................................
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int mask = 0;
    if(n==0){
        cout<<1;
        return 1;
    } 
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans=(~n)&mask;
    cout<<ans<<endl;
    return 0;
}