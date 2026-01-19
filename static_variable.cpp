#include <iostream>
using namespace std;

static int product(int a,int b ){ // static variable inside function
    static int c=0;  //only initialized once
    c =c+1;       // each time the function is called , the value of c will be retained
    return(a*b+c);
}

int main() {
    int a,b;
    cout<<"Enter the valuse of a and b = "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;
    cout<<"The product of a and b is = "<<product(a,b)<<endl;

    return 0;
}