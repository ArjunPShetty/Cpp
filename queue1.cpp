#include<iostream>
#include<queue>
using namespace std;

int main() {
vector<int> v{2,1,2,3,4};
int key=3;
queue<int> q;
for(int i=0;i<v.size();i++)
q.push(i);
int count=0;
while(v[key]!=0)
{
    v[q.front()]--;
    count++;
    if(v[q.front()]>0)
    {
        q.push(q.front());
        q.pop();
    }

else q.pop();
}
    cout<<count;
}