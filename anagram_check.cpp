#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="listern";
    string s2="sileant";
    map<char,int> m;
    for(int i=0;i<s1.size();i++)
    {
        m[s1[i]]++;
        m[s2[i]]--;
    }
    for(auto i:m)
    {
        if(i.second!=0)
        {
            cout<<"Not Anagrams"<<endl;
            return 0;
        }
    }
    cout<<"Anagrams"<<endl;
}