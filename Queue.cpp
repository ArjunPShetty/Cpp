#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    

    return 0;
}