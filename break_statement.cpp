#include <iostream>
using namespace std;
int main() {
    
    for(int i=1;i<=10;i++){
        if(i==5){
            break; //breaks the code before 5
        }
        cout<<i<<endl;
        
    }
    
    cout<<endl;

    for(int i=1;i<=10;i++){
        cout<<i<<endl;
        if(i==5){
            break; //breaks the code after 5
        }
    }

    return 0;
}