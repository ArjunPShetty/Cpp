#include<iostream>
using namespace std;

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);               // Comparing enum value with integer and gives output in 0 and 1

    return 0;
}
