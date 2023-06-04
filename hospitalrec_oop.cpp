// hospital
#include<iostream>
using namespace std;

// class
class HospitalRec
{
    public:
    string first_name;
    string last_name;
    double weight;
    double height;
    double temperature;

    //function #1
    void display()
    {
        cout<<" First Name :" << first_name;
        cout<<" Last Name : " <<last_name;
    }
  
  //function #2
    void temp()
    {
      double celcius;
      temperature = celcius* 9/5 +32;
      cout<<"temperature in celcius: \n";
      cin>>celcius;
      cout<<"temperature : \n" <<temperature;
    }

    // function #3
    double bodymass()
    {
        double bmi = weight/height*height;
        return bmi;
    }
};// end of class

// main function
int main()
{
    //initializing two obj
    HospitalRec brenda;
    HospitalRec kwame;

    // brenda obj
    brenda.first_name= "Brenda\n";
    brenda.last_name= "Musa\n";
    brenda.display();
    brenda.temp();
    cout<<"\n";
    cout<<"what is your height and weight\n";
    cin>>brenda.height;
    cin>>brenda.weight;
    double body= brenda.bodymass();
    cout<<"Your body mass " << body;
 
 // kwame obj
    kwame.first_name= "Kwame\n";
    kwame.last_name= "Monday\n";
    kwame.display();
    kwame.temp();
    cout<<"\n";
    cout<<"what is your height and weight\n";
    cin>>kwame.height;
    cin>>kwame.weight;
    double body=kwame.bodymass();
    cout<<"Your body mass " << body;

    

}