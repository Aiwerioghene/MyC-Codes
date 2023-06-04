#include<iostream>
using namespace std;

double area(double a, int b)
{
    double c;
    c=a*(b*b);
    return c;
}
int main()
{
   const double pie = 3.142;
   int r = 3;
   double result;
    cout<<"the area of our circle is: ";
    cout<<area(pie, r);
}