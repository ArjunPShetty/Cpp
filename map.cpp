#include<iostream>
#include<map>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    map<char,int>m;
    m['b']=2;
    m['a']=1;
    m['c']=3;
    m['b']=4;
    cout<<m['c']<<endl;
    cout<<m.size()<<endl;
    if(m.count('d')==1)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
    