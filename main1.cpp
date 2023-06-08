//AIWERIOGHENE ADESUWA ANGELA
// 21/0561
//COMPUTER SCIENCE GROUP A
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    // Open the file for writing
    ofstream file("multiplicationn_table.txt");
    
    // Write the multiplication table to the file
    for (int i = 1; i <= 20; i++) 
    {
        for (int j = 1; j <= 20; j++)
        {
            file << i << " x " << j << " = " << i*j << endl;
        }
    }
    
    // Close the file
    file.close();
    
    return 0;
}