#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int a=10;
    int*ptr = &a;
    cout<<ptr<<endl;
    ptr=ptr+1;   //+4 bits added (1 int = 4 bit)
    cout<<ptr<<endl;
    
    return 0;
}