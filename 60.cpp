#include<iostream>
#include<queue>
using namespace std;



int main(){
    queue<int> q;
    q.push(13);
    q.push(34);
    q.push(43);
    
    
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    return 0;
}