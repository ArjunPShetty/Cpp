#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abcdabcd";
    map<char,int> m;
    string result;
    for(int i=0;i<s.size();i++)
    {
        if(m.count(s[i])==0)
        {
            m[s[i]]=1;
            result+=s[i];
        }
    }

    cout<<result<<endl;
    return 0;
}