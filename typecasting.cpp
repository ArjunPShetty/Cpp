#include <iostream>
using namespace std;
int main() {
    float a=35.67;
    int b=45;
    cout<<"The value of a is = "<<a<<endl;
    cout<<"The value typecasting of a is = "<<int(a)<<endl;
    cout<<"\n";
    cout<<"The value of b is = "<<b<<endl;
    cout<<"The value typecasting of b is = "<<float(b)<<endl;
    cout<<"\n";
    cout<<"The value typecasting of b is = "<<int(a)+b<<endl;
    cout<<"The value typecasting of b is = "<<(int)a+b<<endl;
    cout<<"The value typecasting of b is = "<<a+float(b)<<endl;
    return 0;
}