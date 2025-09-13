#include<iostream>
using namespace std;
int main()
{
    int a,r=0;
    cout<<"Enter the a value";
    cin>>a;
    while (a>0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    cout<<"reverse is"<<r<<endl;

}