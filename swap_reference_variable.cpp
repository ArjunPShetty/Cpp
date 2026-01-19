#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a   = b;
    b   = temp;
}

int main() {
    int x=5, y=6;
    cout<<"the vlaue of x is "<<x<<" and value od y is "<<y<<endl;
    swap(x,y);
    cout<<"the vlaue of x is "<<x<<" and value od y is "<<y<<endl;

    
    return 0;
}