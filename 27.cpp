#include <iostream>
using namespace std;
void update(int **p)
{
    // p = p + 1; // kuch change nhi hoga
    // *p = *p + 1;
    **p = **p + 1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /* cout << &p2 << endl;
     cout << &p << endl;
     cout << p2 << endl;
     cout << &i << endl;
     cout << p << endl;
     cout << *p2 << endl;
     cout << **p2 << endl;
     cout << *p << endl;
     cout << i << endl; */
    cout << "before\n";
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    update(p2);
    cout << "after\n";
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    return 0;
}