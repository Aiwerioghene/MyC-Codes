//records of students
#include<iostream>
using namespace std;

//class name
class Records
{
    // data members
  public:
   string fname;
   string lname;
   string matno;
   double quiz, midsemester, exam;

   // function#1
   double total()
   {
    double totalscores= quiz+midsemester+exam;
    return totalscores;
   }

   //function#2
   void display()
   {
     cout<<"First name: " <<fname<<endl;
     cout<<"Last name: " <<lname<<endl;
     cout<<"Matric Number: " <<matno<<endl;
   }

};

// class #2
class Average : public Records
{
   public: 
   
   double ave()
   {
     double average = total() /3.0;
     return average;
   }
};

// main function
int main()
{
    Average student;
    student.fname = "Adesuwa";
    student.lname ="Smith";
    student.matno="21/2000";
    student.display();
    
    cout<<"What is your mid semester, test and exam score\n";
    cin>>student.midsemester;
    cin>>student.quiz;
    cin>>student.exam;
    double totall= student.total();
    cout<<"Your total score is"  <<totall <<"\n";
    double aver = student.ave();
    cout<<"Your average score is " <<aver <<"\n";

}