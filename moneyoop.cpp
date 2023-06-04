#include<iostream>
using namespace std;

class IdealResources
{
  public:
  string name;
  int empno;
  string degree;
  int rank;
  double salary;
  double bonus;

  //#1
  void details()
  {
    cout<<"Name of Employee: " <<name<<endl;
    cout<<"Employee number: " <<empno<<endl;
    cout<<"Degree : " <<degree<<endl;
    cout<<"Rank: " <<rank<<endl;
    cout<<"Salary: " <<salary<<endl;
    cout<<"Entitled Bonus: " <<bonus<<endl;
  }

  //#2
  class Seconded: public Resources
  {
    public:
    double calculatePay()
    {
    double pay = salary + bonus;
    if(rank >=9)
    {
     pay +=(pay*0.2);
    }
   return pay;
    }
  }

};

//#2 class
class Training  : public IdealResources
{
   public:
   void sentOnline()
   {
     cout<<"SENDING DEATILS OF " << name << "ONLINE"<<endl;

   }
};

//main
int main()
{
    //creating an obj
    IdealResources a;
    a.name="Adesuwa";
    a.empno=12345;
    a.degree="Bachelor";
}