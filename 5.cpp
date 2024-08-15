// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     bool flag=1;
//     for (int i = 2; i <= n-1; i++)
//     {
//         if (n%i==0)
//         {
//             flag=0;
//             break;
//         }
//     }
//     if (flag==0 )
//     {
//         cout<<"Not a prime number";
//     }
//     else if (n<2)
//     {
//         cout<<"Neither prime nor composite";
//     }
    
//     else
//     {
//         cout<<"is a prime number";
//     }
//     return 0;
// }
//...........................................................................................
// Leet code question
#include<iostream>
using namespace std;

int main(){
    int n=234;
    int count;
    int sum=0;
    int p=1;
    while (n!=0)
    {
        count=n%10;
        sum+=count;
        p*=count;
        n /=10;
    }
    cout<<sum<<endl;
    cout<<p<<endl;
    cout<<p-sum;
    return 0;
}