#include <iostream>
using namespace std;

    typedef struct employee{  //typedef keyword used here
        int eID;
        char favChar;
        float salary;
    } ep;                     //ep is now an alias for struct employee
    
int main() {
    ep rock ;                 //using the alias 'ep' instead of 'struct employee'
        rock.eID=012;
        rock.favChar='y';
        rock.salary=10267;
        
        cout<<rock.eID<<endl;
        cout<<rock.favChar<<endl;
        cout<<rock.salary<<endl;
        
    return 0;
}