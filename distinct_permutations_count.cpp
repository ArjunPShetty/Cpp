
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int fact(int);
int main()
{
    string s = "shetty";
    map<char, int>m;
    for (int i=0;i<s.size();i++) 
    {
        m[s[i]]++;
    }
    int n=1;
    n=fact(s.size());
    int deno=1;
    for(auto i:m)
    {
        deno*=fact(i.second);
    }
    cout<<n/deno;
}
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}