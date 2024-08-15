// STL array...........................................................................................
// #include <iostream>
// #include <algorithm>
// #include<array>
// using namespace std;
// int main() {
//    array<int,6> a{55,32,4,78,13,24};
//    int size=a.size();
//    for(int i=0;i<size;i++){
// cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    cout<<"array is empty or not "<<a.empty()<<endl;
//    cout<<"first element of array "<<a.front()<<endl;
//    cout<<"last element of array "<<a.back()<<endl;
//    cout<<"first element of array "<<a.begin()<<endl;
//    cout<<"last element of array "<<a.end()<<endl;
//     sort(a.begin(), a.end());
//    for(int i=0;i<size;i++){
// cout<<a[i]<<" ";
//    }
// cout<<"\n";
//  array<int,6> b;
//     int size1=b.size();
//   b.fill(1);
//    for(int i=0;i<size1;i++)
//       { cout<<b[i]<<" ";}
//     return 0;
// }
// // STL vector...........................................................................................
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     cout<<"for vector v"<<endl;
//     vector<int> v;
//     cout << "size->/capacity->" << v.capacity() << endl;
//     v.push_back(3);
//     cout << "size->/capacity->" << v.capacity() << endl;
//     v.push_back(5);
//     cout << "size->/capacity->" << v.capacity() << endl;
//     v.push_back(11);
//     cout << "size->/capacity->" << v.capacity() << endl;
//     v.push_back(26);
//     cout << "size->/capacity->" << v.capacity() << endl;
//     v.push_back(0);
//     cout << "capacity->" << v.capacity() << endl;
//     cout << "size->" << v.size() << endl;
//     cout << "3rd element->" << v.at(2) << endl;
//     cout << "first element of vector is: " << v.front() << endl;
//     cout << "last element of vector is: " << v.back() << endl;
//     v.pop_back();
//     cout << "last element of vector is: " << v.back() << endl;
//     cout << "capacity->" << v.capacity() << endl;
//     cout << "size->" << v.size() << endl;
//     v.push_back(1);
//     cout << "size of vector before using clear funct: " << v.size() << endl;
//     v.clear();
//     cout << "size of vector after using clear funct: " << v.size() << endl;
//     cout<<"for vector a"<<endl;
//     vector<int> a(5,1);
//     for( int i : a){
//         cout<<i<<" ";
//     }
//     cout<<"\ncopy above vector"<<endl;
//     vector<int> last(a);
//     for( int i : a){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// // STL Deque...........................................................................................
// #include <iostream>
// #include <Deque>
// using namespace std;

// int main()
// {
//     cout<<"for deque d"<<endl;
//     deque<int> d;
//     d.push_back(4);
//     d.push_back(9);
//     d.push_front(7);
//     cout<<"Before erase "<<endl;
//     for( int i : d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout << "size->" << d.size() << endl;
//     cout << "element at first index " << d.at(1) << endl;
//     cout << "Last element " << d.back() << endl;
//     cout << "First element " << d.front() << endl;
//     // d.pop_back();
//     cout<<"Empty or not "<<d.empty()<<endl;
//     // cout<<"After pop_back"<<endl;
//     // for( int i : d){
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;
//     // cout << "size->" << d.size() << endl;
//     cout<<"after erase "<<endl;
//     d.erase(d.begin(),d.end()-1);
//     // d.erase(d.begin(),d.begin()+2); same as
//     for( int i : d){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// // STL Deque...........................................................................................
// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//    cout<<"for list d"<<endl;
//     list<int> d;
//     d.push_back(4);
//     d.push_back(9);
//     d.push_front(7);
//     for( int i : d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"size->"<<d.size();
//     return 0;
// }
// // STL stack...........................................................................................
// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//    cout<<"for stack s"<<endl;
//     stack<string> s;
//     s.push("Hello");
//     s.push("Om");
//     s.push("Asati");
//     cout<<"Top element: "<<s.top()<<endl;
//    s.pop();
//     cout<<"Top element: "<<s.top()<<endl;
//     // for( int i : s){
//     //     cout<<i<<" ";
//     // }
//     cout<<endl;
//     cout<<"size->"<<s.size()<<endl;
//     cout<<"empty or not "<<s.empty();
//     return 0;
// }
// // STL queue...........................................................................................
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//    cout<<"for queue s"<<endl;
//     queue<string> s;
//     s.push("Hello");
//     s.push("Om");
//     s.push("Asati");
//     cout<<"Top element: "<<s.front()<<endl;
//    s.pop();
//     cout<<"Top element: "<<s.front()<<endl;
//     // for( int i : s){
//     //     cout<<i<<" ";
//     // }
//     cout<<endl;
//     cout<<"size->"<<s.size()<<endl;
//     cout<<"empty or not "<<s.empty();
//     return 0;
// }
// // STL priority queue...........................................................................................
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     // cout << "for queue s" << endl;
//     // max heap
//     priority_queue<int> maxi;
//     // max heap
//     priority_queue<int, vector<int>, greater<int>> mini;
//     maxi.push(1);
//     maxi.push(9);
//     maxi.push(3);
//     maxi.push(0);
//     int n = maxi.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << maxi.top() << " ";
//         maxi.pop();
//     }
//     cout << endl;
//     cout << "empty or not " << maxi.empty() << endl;
//     mini.push(1);
//     mini.push(8);
//     mini.push(4);
//     mini.push(-3);
//     mini.push(0);
//     int m = mini.size();
//     for (int i = 0; i < m; i++)
//     {
//         cout << mini.top() << " ";
//         mini.pop();
//     }
//     cout << endl;
//     cout << "empty or not " << mini.empty() << endl;
//     return 0;
// }
// // STL set...........................................................................................
// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s;
//     s.insert(27);
//     s.insert(2);
//     s.insert(37);
//     s.insert(2);
//     s.insert(51);
//     s.insert(89);
//     s.insert(92);
//     s.insert(2);
//     s.insert(51);
//     s.insert(0);
//     s.insert(0);
//     s.insert(6);
//     for(int i : s){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     // s.erase(s.begin());
//     // for(int i : s){
//     //     cout<<i<<" ";
//     // }
//     set<int> :: iterator it=s.begin();
//     advance(it,0); /* Move the iterator to the 4th element (0-based index)*/
//     s.erase(it);
//     for(int i : s){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"-51 is present or not "<<s.count(-51)<<endl;
//     cout<<endl;
//     cout<<"51 is present or not "<<s.count(51)<<endl;
//     return 0;
// }
// STL set...........................................................................................
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "hello";
    m[12] = "om";
    m[3] = "asati";
    for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : m)
    {
        cout << i.second << " ";
    }
    cout << endl;
    cout << endl;
    m.insert({6,"Sunil"});
        for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : m)
    {
        cout << i.second << " ";
    }
    cout << endl;
    return 0;
}