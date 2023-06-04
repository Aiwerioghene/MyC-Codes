#include<iostream>
using namespace std;

double electricityCharges()
{
    double units;
    double charges =0.0; 

    if(units <=100)
    {
       charges = units * 2.00;
    }
    else 
    if(units <=200)
    {
        charges = units * 3.50;
    }
    else 
    if(units >=200)
    {
        charges = units *4.50;
    }
}