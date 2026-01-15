#include<iostream>
#include<vector>
using namespace std;
int fun(int a,int b);

int main() {
    int n,b=0;
    vector<int> num;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> b;
        num.push_back(b);
    }
    int lcm=num[0];
    for(int i=1;i<num.size();i++)
    {
        lcm=fun(lcm,num[i]);
    }
    cout << "LCM of the given numbers is: " << lcm;
    return 0;
}

int fun(int x,int y)
{
    int l;
    (x>y)?(l=x):(l=y);
    while(1)
    {
        if(l%x==0 && l%y==0)
        {
            return l;
        }
        l++;
    }
}