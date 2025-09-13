#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,2,-3,4,5,-6};
    stack<int>st;
    for(int i=0;i<v.size();i++)
    {
        if(st.empty())
        st.push(v[i]);
        else if((v[i]>=0 && st.top()>=0)||(v[i]<=0&&st.top()<=0))
        st.push(v[i]);
        else
        st.pop();
    }
    v.clear();
    while(!st.empty())
    {
        v.insert(v.begin(),st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    return 0;
}
    