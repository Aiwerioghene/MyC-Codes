//bank charges
#include<iostream>
using namespace std;

//beginning of the class
class GallantBank
{
    public:
    double balance;
    int noOfChecks;

//constructor
    GallantBank(double bal, int checks)
    {
        balance=bal;
        noOfChecks=checks;
    }

    //memeber function
    double serviceFees()
    {
        //calculates the total fees
        double fees=1000.00;
        if(noOfChecks<20)
        {
            fees+=noOfChecks*1000;
        }else
        if(noOfChecks>=20 && noOfChecks<=39)
        {
            fees+=noOfChecks*800;
        }
        else
        if(noOfChecks>=40 && noOfChecks<=59)
        {
            fees+=noOfChecks*600;
        }
        else
        if(noOfChecks>=60)
        {
            fees+=noOfChecks*15000;
        }
        if(balance<15000000)
        {
             noOfChecks+=fees*15000;
        }
        return fees;
    }
    

    
};//end of the class

//main function
int main()
    {
        //creating an object called doris
        GallantBank doris(400000, 32);
        {
            cout<<"Balance:"<<doris.balance<<endl;
            cout<<"No of Checks:"<<doris.noOfChecks<<endl;
            cout<<"Service fee:"<<doris.serviceFees()<<endl;
        }
    }
