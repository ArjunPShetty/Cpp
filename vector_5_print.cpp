#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

}