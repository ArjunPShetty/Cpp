#include <iostream>
using namespace std;

float MoneyRecived(int currentmoney,float factor = 1.04 ){ 

    return(currentmoney*factor);
}

int main() {
    int money;
    cout <<"How mush money you have in your bank account = ";
    cin>>money;
    cout<<endl;
    cout<<"IF you have "<<money<<" Rs in your bank account,You will recive '"<< MoneyRecived(money)<<"' after 1 year"<<endl;
    cout<<"For VIP: IF you have "<<money<<" Rs in your bank account,You will recive '"<< MoneyRecived(money*1.1)<<"' after 1 year"<<endl;

    return 0;
}