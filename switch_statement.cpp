#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the Number from 1 to 10 = ";
    cin>>number;

    switch (number)
    {
        case 1 :
            cout<<"The number is  1"<<endl;
            break;
        case 2 :
            cout<<"The number is  2"<<endl;
            break;
        case 3 :
            cout<<"The number is  3"<<endl; 
            break;
        case 4 :
            cout<<"The number is  4"<<endl;
            break;
        case 5 :
            cout<<"The number is  5"<<endl;
            break;
        case 6 :
            cout<<"The number is  6"<<endl;
            break;
        case 7 :
            cout<<"The number is  7"<<endl;
            break;
        case 8 :
            cout<<"The number is  8"<<endl;
            break;
        case 9 :
            cout<<"The number is  9"<<endl;
            break;
        case 10 :
            cout<<"The number is 10"<<endl;
            break;      
            default:
            cout<<"The number is out of range from 1 to 10"<<endl;
    }
    return 0;
}