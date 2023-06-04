//Create a class called "Employee" 
//with a constructor that takes in a string for the employee's name and a double for their hourly wage. 
//Define a function called "calculatePay" that takes in an integer for the number of hours worked and returns the employee's pay for that week.
// Also define a function called "printPayStub" that prints out the employee's name, hours worked, and pay for the week to the console.

#include<iostream>
using namespace std;

//class
class Employee
{
   public:
   string name;
   double hourly_wage;
   int hours_worked;
   

   //constructor
   Employee(string n, double hw, int hours_w)
   {
     name=n;
     hourly_wage= hw;
     hours_worked=hours_w;
   }

   //function
   double calculatePay()
   {
    return hours_worked*hourly_wage;
   }

   //function2
   void Paysub()
   {
    cout<<"Name:" <<name <<endl;
    cout<<"Hours Worked:" << hours_worked<<endl;
    cout<<"Pay: $" <<calculatePay();
   }


};

int main()
{
    Employee person("Adesuwa",45.00, 4);
    person.calculatePay();
    person.Paysub();
}