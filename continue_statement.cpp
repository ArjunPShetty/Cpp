#include <iostream>
using namespace std;
int main() {
    
    for(int i=1;i<=10;i++){
        if(i==5){
            continue; // expect 5 every number will be printed
        }
        cout<<i<<endl;
        
    }
    return 0;
}