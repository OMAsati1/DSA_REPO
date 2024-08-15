// #include <iostream>
// using namespace std;
// #define PI 3.14
// int main()
// {
//     double r = 6.5;
//     // double area=3.14*r*r;
//     double area = PI * r * r;

//     cout << area << endl;
//     return 0;
// }
// #include <iostream> // Include iostream for C++ input/output

// // Macro definition
// #define AREA(l, b) ((l) * (b)) // Added parentheses for safety

// using namespace std;

// int main()
// {
//     // Given lengths l1 and l2
//     int l1 = 10, l2 = 5, area;

//     // Find the area using macros
//     area = AREA(l1, l2);

//     // Print the area
//     cout << "Area of rectangle is: " << area << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int score =9;// this is global variable
// void a(){
//     cout<<score<<endl;
// }
// void b(){
//     cout<<score<<endl;
// }
// int main(){
//     cout<<score<<endl;
//     a();
//     b();
//     return 0;
// }
// #include<iostream>
// using namespace std;



// inline int getMax(int& a, int& b) {
//     return (a>b) ? a : b;
// }

// int main() {

//     int a = 1, b = 2;
//     int ans = 0; 

//     ans = getMax(a,b);
//     cout << ans << endl;

//     a = a + 3;
//     b = b + 1;

//     ans = getMax(a,b);
//     cout << ans << endl;



//     return 0;
// }