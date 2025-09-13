#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={5,2,6,9,2,7};
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=v.size()-1;i>0;i-=3)
    {
        sum+=v[i]+v[i-1];
    }
    cout<<sum<<endl;
    return 0;
}