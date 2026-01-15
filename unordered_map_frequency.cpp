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
    for(auto i:m)
    {
        cout<<i.first<<":"<<i.second<<endl;
    }
    return 0;
}
    