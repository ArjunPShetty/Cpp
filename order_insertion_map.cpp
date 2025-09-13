#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={2,1,2,1,3,1};
    unordered_map<int,int>m;
 for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(int i=0;i<v.size();i++)
    {
        if(m[v[i]]>0)
        {
            cout<<v[i]<<":"<<m[v[i]]<<endl;
            m[v[i]]=0;
        }
    }
return 0;
}
    