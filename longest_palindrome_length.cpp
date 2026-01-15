#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "aaaabbbbcccdde";
    map<char, int>m;
    int ans=0;
    for (int i=0;i<s.size();i++) 
    {
        m[s[i]]++;
    }
    int flag=0;
    for(auto i:m)
    {
        if(i.second%2==0)
        {
            ans+=i.second;
        }
        else
        {
            ans+=i.second-1;
            flag=1;
        }
    }
    cout<<ans+flag;
    return 0;
}