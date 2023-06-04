//RECTANGLEEEE

#include<iostream>
using namespace std;

//class
class Rectangle
{
    public:
    int length;
    int width;

    double calculate_area()
    {
        
        double area = length*width;
        return area;
    }

    void display()
    {
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
        cout<<"the area of the rectangle is" <<calculate_area();
    }

    //constructor
    Rectangle(int l, int w)
    {
        length=l;
        width=w;
    }

};

//main function
int main()
{
   Rectangle r(6,9);
   r.display();
}