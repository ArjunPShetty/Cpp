#include <iostream>
using namespace std;
int main() {
    int a = 4;
    cout<<"  &a   = "<<&a<<endl;  // & - Address of operator

    cout<<endl;

    int *b = &a;
    cout<<"  *(&a) = "<<*(&a)<<endl;
    cout<<"  b     = "<<b<<endl;
    cout<<"  *b    = "<<*b<<endl; // * - Dereference operator

    cout<<endl;
    
    int **c = &b;
    cout<<"  &b   = "<<&b<<endl;
    cout<<"  *c   = "<<*c<<endl; 
    cout<<"  **c  = "<<**c<<endl;
    cout<<endl;

    int ***d = &c;
    cout<<"  &c   = "<<&c<<endl;
    cout<<"  *d   = "<<*d<<endl; 
    cout<<"  **d  = "<<**d<<endl; 
    cout<<"  ***d = "<<***d<<endl; 
        
    return 0;
}
