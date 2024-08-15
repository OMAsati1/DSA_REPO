// decimal to binary.......................................................................

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int n;
//     cin>> n;
//     float  ans=0;
//     int i=0;
//     while (n!=0)
//     {
//         int digit=n & 1;
//         ans= (digit*pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<(int)ans;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     long long int ans = 0;
//     long long int place = 1;  // This represents 10^i without using pow

//     while (n != 0)
//     {
//         int digit = n & 1;
//         ans += digit * place;
//         n = n >> 1;
//         place *= 10;
//     }
//     cout << ans;
//     return 0;
// }

// binary to decimal........................................................................
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>> n;
    float  ans=0;
    int i=0;
    while (n!=0)
    {
        int digit=n % 10;
        
        ans= (digit*pow(2,i))+ans;
        
        n/=10;
        i++;
    }
    cout<<(int)ans;
    
    return 0;
}