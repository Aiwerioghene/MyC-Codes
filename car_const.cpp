//Create a class called "Car" with a constructor
//that takes in a string for the car's make and model, an integer for the year it was made, and a double for its price.
// Define a function to print out its details

#include<iostream>
using namespace std;

//class
class Car
{
   public:
   string make, model;
   int c_year;
   double price;
   int made;

   //constructor

   Car(string m, string mo, int y, double p)
   {
      make= m;
      model=mo;
      c_year=y;
      price=p;

   }

   void printDetails()
   {
    cout<<"Make:" <<make<<endl;
    cout<<"Model:" <<model<<endl;
    cout<<"Year:" <<c_year<<endl;
    cout<<"Price:" <<price<<endl;
    
   }

};//end of class

//main funcction
int main()
{
    Car car1("Toyota", "COROlla", 2017, 4567.90);
    car1.printDetails();
    cout<<"\n";
    Car car2("Prado", "kIA", 2022, 5000.90);
    car2.printDetails();
    

}
