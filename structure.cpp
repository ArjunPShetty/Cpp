#include <iostream>
using namespace std;

    struct employee{
        int eID;
        char favChar;
        float salary;
    }; 
    
int main() {
    struct employee rock ;
        rock.eID=12;
        rock.favChar='h';
        rock.salary=1234;
        
        cout<<rock.eID<<endl;
        cout<<rock.favChar<<endl;
        cout<<rock.salary<<endl;
        
    return 0;
}