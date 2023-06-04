// ideal resources corporation
#include<iostream>
using namespace std;

//class #1
class Resources
{
   public:
   string name;
   int empno;
   string degree;
   int rank;
   double salary;
   double bonus;

   //function #1
   void display()
   {
   cout<<"Full Name: " <<name<<endl;
   cout<<"Employee number: " <<empno<<endl;
   cout<<"Degree: " <<degree<<endl;
   cout<<"Rank: " <<rank<<endl;
   cout<<"Salary: " << salary<<endl;
   cout<<"Entitle Bonus: " <<bonus<<endl;
   }
};

//class #2
class Seconded : public Resources
{
 
 public:
 double calculatepay()
 {
   double pay = salary + bonus;
   if(rank >=9)
   {
     pay +=(pay*0.2);

   }
   return pay;
 }
  
   
};

// class #3
class Training : public Resources
{
   public:
   void sendDetailsOnline()
   {
    cout<<"Sending details of employee" << name<< "online" <<endl;
   }
   
};

//main function
int main()
{

    //obj1
    Seconded employee;
    employee.name = "Adesuwa Aiwerioghene";
    employee.empno= 12345;
    employee.degree= "PhD";
    employee.rank=1;
    employee.salary=300000;
    employee.bonus= 5000;
    employee.display();
    double calcpay=employee.calculatepay();
    cout<<employee.name<<"  Pay is " << calcpay;

    Training employee2;
    employee2.name = "Jaden smith";
    employee2.empno= 23456;
    employee2.degree= "Masters";
    employee2.rank=10;
    employee2.salary=900000;
    employee2.bonus= 7000;
   employee.display();
    employee2.sendDetailsOnline();
}