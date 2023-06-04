// program for classses and obj <triangle>
#include<iostream>
using namespace std;

class Triangle
{
    public:
    double base, height;
    double area()
    {
        return 0.5*height*base;
    }
};

//main function
int main()
{
    Triangle tri1;
    Triangle tri2;

    cout<<"enter base and height of this triangle" <<endl;
    cin>>tri1.height;
    cin>>tri1.base;
    cout<<"The area of the first traingle is " << tri1.area() <<endl;

    cout<<"enter base and height of this triangle" <<endl;
    cin>>tri2.height;
    cin>>tri2.base;
    cout<<"The area of the second traingle is " << tri2.area()<<endl;
}