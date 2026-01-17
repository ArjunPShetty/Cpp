#include <iostream>
using namespace std;

 void changeA(int* ptr){ // pass by reference using alias
    *ptr =20;
}

int main() {
    int a=10;
    changeA(&a); // passing address of a
    cout<<a;

    return 0;
}