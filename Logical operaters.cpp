#include <iostream>
using namespace std;

int main() {
    int a=5,b=4;
    cout<<"The logical AND operation = "<<((a==b)&&(a<=b))<<endl;
    cout<<"The logical OR operation = "<<((a==b)||(a<=b))<<endl;
    cout<<"The logical NOT operation = "<<(!(a<=b))<<endl;
    return 0;
}