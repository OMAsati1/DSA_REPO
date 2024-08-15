// #include<iostream>
// using namespace std;

// int main(){
//     int ch;
//     cin>> ch;
//     int n=1330;
//    switch (ch)
//    {
//    case 1 :
//     cout<<"Number of 100rs notes required: "<<n/100<<endl;
//     break;
//    case 2 :
//     cout<<"Number of 50rs notes required: "<<(n%100)/50<<endl;
//     break;
//    case 3 :
//     cout<<"Number of 20rs notes required: "<<((n%100)%50)/20<<endl;
//     break;
//    case 4 :
//     cout<<"Number of 1rs notes required: "<<(((n%100)%50)%20)/1<<endl;
//     break;

//    default : cout<<"invalid input. You can only enter 1,2,3 or 4";
//     break;
//    }
//     return 0;
// }
// //...............................................................................................................
// #include<iostream>
// using namespace std;
// int AP(int n){
//   int ans=(3*n)+7;
//   return ans;
// }
// int main(){
//     int a;
//     cout<<"Enter a"<<endl;
//     cin>>a;
//     cout<<"The nth term of an AP is: "<<AP(a);
//     return 0;
// }
//...............................................................................................................
// #include<iostream>
// using namespace std;
// int Count_Set_Bits(int a, int b){
//   int c=0;
//   while(a!=0 || b!=0){
//      if
//       ( a & 1 == 1)
//      {
//       c++;
//      }
//     a=a>>1;
//      if
//       ( b & 1 == 1)
//      {
//       c++;
//      }
//     b=b>>1;

//   }
//   return c;
// }
// int main(){
//   int x,y;
//   cout<<"Enter two numbers: ";
//   cin>>x>>y;
//   cout << "Sum of the set bits in the entered numbers is: ";
//     cout<<Count_Set_Bits(x,y);
//     return 0;
// }//...............................................................................................................
#include <iostream>
using namespace std;
int Fb(int a)
{
  if (a == 1)
  {
    return 0;
  }
  else if (a == 2)
  {
    return 1;
  }
  return Fb(a - 1) + Fb(a - 2);
}
int main()
{
  int n;
  cout << "Enter number n: ";
  cin >> n;
  cout << "nth term of fibnnoaci series is: ";
  cout << Fb(n);
  return 0;
}