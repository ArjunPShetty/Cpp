#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<*arr<<endl;      //0 bits added  (0 int = 0 bit)
    cout<<*(arr+1)<<endl;  //added 4 bits  (1 int = 4 bit)
    cout<<*(arr+2)<<endl;  //added 8 bits  (2 int = 8 bit)
    cout<<*(arr+3)<<endl;  //added 12 bits (3 int = 12 bit)
    cout<<*(arr+4)<<endl;  //added 16 bits (4 int = 16 bit)
    cout<<*(arr+5)<<endl;  //added 20 bits (5 int = 20 bit)
    cout<<*(arr+6)<<endl;  //added 24 bits (6 int = 24 bit)
    cout<<*(arr+7)<<endl;  //added 28 bits (7 int = 28 bit)
    cout<<*(arr+8)<<endl;  //added 32 bits (8 int = 32 bit)
    return 0;
}