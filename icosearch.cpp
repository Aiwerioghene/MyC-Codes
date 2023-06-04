//searching for scores using an array
#include<iostream>
using namespace std;
int main()
{
    int score[15]; 
    int search, index;

    cout<<"Input scores\n";
   for (int i=0;i<15;i++)
   {
       cin>>score[i];
   }
   cout<<"Input score to be searched\n";
   cin>>search;

   for(index=0;index<15;index++)
   {
       if(score[index]==search)
       break;
   }
   if(index<15)
   {
       cout << search << "is found at index" << index <<endl;
   }else
   cout<<search <<"Not found"<<endl;
}