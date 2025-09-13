#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="abc";
    cout<<s.size();
    s+='d';
    cout<<s<<endl;
    s='e'+s;
    cout<<s;
    s="";
}