#include<iostream>
using namespace std;

double deposit()
{
    double balance=50000, amt;
    cout<<"enter the amount you want to deposit"<<endl;
    cin>>amt;
    balance= balance+amt;
    return balance;
}

void withdraw()
{
    double withamt, balance=100000;
    cout<<"enter amount ypu would like to withdraw"<<endl;
    cin>>withamt;

    if(withamt>=balance)
    {
        cout<<"insufficient fund"<<endl;
    }else
    {
        balance= balance-withamt;
    }
}

//main function
int main()
{
    cout<<"after deposit your main balance is" <<deposit()<<endl;
    withdraw();
    return 0;
}