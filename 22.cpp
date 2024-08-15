// #include <iostream>
// using namespace std;
// char toLowerCase(char ch) {
//     if(ch >='a' && ch <='z')
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// int getLength(char name[])
// {
//     int c = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         c++;
//     }
//     return c;
// }
// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }
// bool checkPalindrome(char a[], int n) {
//     int s = 0;
//     int e = n-1;

//     while(s<=e) {
//         if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     char a[20];
//     cout << "Enter your name: ";
//     cin >> a;
//     cout << "your name is: ";
//     cout << a;
//     int l = getLength(a);
//     cout << "\nLength: " << l;
//     reverse(a, l);
//     cout << "\nReverse of your name: " << a;
//     cout<<"\nYour name is palindrome or not: "<<checkPalindrome(a,l);
//     return 0;
// }
// #include <iostream>
// #include <algorithm> // for std::swap

// // Helper function to reverse a portion of the array from start to end indices
// void reverse(char* arr, int start, int end) {
//     while (start < end) {
//         std::swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// // Function to reverse each word in the given character array
// void reverseWords(char s[]) {
//     // Determine the length of the string manually
//     int n = 0;
//     while (s[n] != '\0') {
//         n++;
//     }

//     int start = 0;
//     int end = 0;

//     while (end <= n) {
//         if (s[end] == ' ' || s[end] == '\0') {
//             reverse(s, start, end - 1);
//             start = end + 1;
//         }
//         end++;
//     }
// }

// int main() {
//     char s[] = "my name is om";
//     std::cout << "Original string: \"" << s << "\"" << std::endl;

//     reverseWords(s);

//     std::cout << "Reversed individual words: \"" << s << "\"" << std::endl;
//     return 0;
// }
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char c[50]="my name is";
//     char c1[50];
//     int l=strlen(c);
//     strcpy(c1,c);
//     cout<<l;
//     cout<<'\n'<<c1;
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

string rmvAdjDup(string s) {
    string temp;
    int i = 0;

    while (i < s.length()) {
        if (!temp.empty() && temp.back() == s[i]) {
            // Remove the last character from temp
            temp.pop_back();
        } else {
            // Add the current character to temp
            temp.push_back(s[i]);
        }
        i++;
    }

    return temp;
}

int main() {
    string str = "ronnoaldo";
    string s1 = rmvAdjDup(str);
    cout << s1 << endl; // Output should be "raldo"
    return 0;
}
