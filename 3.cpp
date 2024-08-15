//H.W->1............................................
// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cin>>ch;
//     if ((int)ch>=48 && (int)ch<=57)
//     {
//         cout<<"This is numeric";
//     }
//     else if ((int)ch>=97 && (int)ch<=122)
//     {
//         cout<<"Lower case";
//     }
//     else if ((int)ch>=65 && (int)ch<=90)
//     {
//         cout<<"Upper case";
//     }
//     else
//     {
//         cout<<"This is non numeric and non alphabetical";
//     }
    

//     return 0;
// }

//H.W->2............................................
#include<iostream>
using namespace std;

int main(){
    double f,c;
    cout<<"enter temp in celcius: ";
    cin>>c;
    f=((c*9)/5)+32;
    cout<<"Temp in Fahrenheit: ";
    cout<<f;
    return 0;
}