//increment function

#include<iostream>
using namespace std;
int incre(int num);
int main()
{
   int number;
    cout<<"Input any integer number: \n";
    cin>>number;

    cout<<"Increment is "<<incre(number)<<endl;
    cout<<"Initial value is "<<number;
}

int incre(int num)
{
    int increase;
    increase = num + 10;
    return increase;

}