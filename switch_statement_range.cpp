#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the NUmber from 1 to 100 = ";
    cin>>number;

    switch (number)
    {
        case 1 ... 50:  // printing range using switch case
            cout<<"The number is between 1 to 50"<<endl;
            break;
        case 51 ... 100:
            cout<<"The number is between 51 to 100"<<endl;
            break;
    }
    return 0;
}