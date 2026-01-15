#include<iostream>
using namespace std;
int fun(int a,int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int lcm=fun(a,b);
    cout << "LCM of " << a << " and " << b << " is: " << lcm;
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