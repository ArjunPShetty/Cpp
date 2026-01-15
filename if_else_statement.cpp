#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    
    if((age>=1)&(age<=18)){
        cout<<"You are not inviated to the party"<<endl;
    }
    else if((age>=19)&(age<=21)){
        cout<<"You can enterwith student pass party"<<endl;
    }
    else{
        cout<<"You are welcome to party"<<endl;
    }
    return 0;
}