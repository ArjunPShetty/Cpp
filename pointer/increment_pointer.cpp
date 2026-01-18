#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a=10;
    int*ptr = &a;
    cout<<ptr<<endl; // pointer value increment is by 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
    ptr++;
    cout<<ptr<<endl; //+4 bits added
    return 0;
}