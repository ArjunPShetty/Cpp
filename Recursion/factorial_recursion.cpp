#include <iostream>
using namespace std;

int factorial(int n){ // Function to calculate factorial recursively
    if(n<=1){                 //any number less than or equal to 1 has factorial 1
        return 1; 
    }
    return n * factorial(n-1); // Recursive call
}

int main(){
    int a;
    cout<<"Enter the value for factorial"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}
