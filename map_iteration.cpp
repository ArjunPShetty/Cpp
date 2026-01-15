#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    m[1]=2;
    m[2]=1;
    m[3]=3;
    m[4]=4;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
    