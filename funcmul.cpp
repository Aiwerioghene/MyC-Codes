//multiplying two numbers using functions
#include<iostream>
using namespace std;
int multiply(int a, int b)
{
    int prod;
    prod = a * b;
    return prod;
}

int main()
{
    int product , x=4, y=5;
    product=multiply(x,y);
    cout<<product;
}