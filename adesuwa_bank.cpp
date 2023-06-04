// bank account
#include<iostream>
using namespace std;

//class
class BankAccount
{
    public:
    double account_no;
    string holder_name;
    double balance;

    //constructor
    BankAccount(double acc_num, string acc_holder, double bal)
    {
        account_no= acc_num;
        holder_name= acc_holder;
        balance= bal;
    }

    // data function
    void withdraw(double amount)
    {
     
     if(amount>balance)
     {
        cout<<"sorry you have insuffficient funds"<<endl;
     }
     else
      {
        cout<<"you have successfully withdraw"<< amount<<endl;
        cout<<"Your current balance="<<balance-amount<<endl;
      }

    }
    
    void deposit(double amount)
    {
      balance +=amount;
      cout<<"you have successfully deposited" <<amount<<endl;
      cout << "Your current balance is " << balance << endl;
      
    }
    void display()
    {
       cout<<"Account number:"<<account_no<<endl;
       cout<<"Holder name:"<<holder_name<<endl;
       cout<<"balance:"<<balance<<endl;
    }

    


};

//main function
int main()
{
  BankAccount adesuwa(123456, "Adesuwa", 200000.00);
  adesuwa.display();

  adesuwa.withdraw(500.0);
  adesuwa.display();

  adesuwa.deposit(2000.00);
  adesuwa.display();

}