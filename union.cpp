#include <iostream>
using namespace std;

    union money{
        int doller;
        char material;
        float rupees;
    }; 
    
int main(){
        union money sells;
         sells.doller = 29;
         cout<<sells.doller;
    return 0;
}
