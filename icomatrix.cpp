


#include<iostream>
using namespace std;
int main(){
    
    int r1, c1, r2, c2, i, j;
    //r1 - is the row updater for the the first matrix
    //c1 - is the column updater for the first matrix 
    //r2 - is the row updater fr the secnd matrix
    //c2 - is the column updater for the second matrix
        // i - is for loading into the row 
        // j - if for laoding into the column of the array

    cout<<"Enter the row dimension for the first matrix  :  ";
    cin>>r1;    //inputing r1
    cout<<"Enter the column dimension for the first matrix : ";
    cin>>c1;    //inputing c1

    ///////////-Inputing values 

    cout<<"Enter the row dimension for the secoond matrix  :  ";
    cin>>r2; //inputing r2
    cout<<"Enter the column dimension for the secoond matrix :  ";
    cin>>c2;   //inputing c2

    int first_matrix[r1][c1];
    int second_matrix[r2][c2];

    //populating the first matrix 
    cout<<"---First Matrix----\n";
    cout<<"--------------------\n";

    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            cout<<"Input the value of row "<<i<<" || column  "<<j<<" : ";
            cin>>first_matrix[i][j];
            cout<<"\n";
        };
    };
    //populating the second matrix
    cout<<"---Second Matrix --- \n";
    cout<<"----------------------- \n";
    for(i = 0; i<r2; i++){
        for(j = 0; j<c2; j++){
        cout<<"Input the value  of row " <<i<<" || column "<<j<<" : ";
        cin>>second_matrix[i][j];
        cout<<" \n"; 
        };
    };

   

// - |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| - //
   //adding the first and second matrix together
    cout<<"Matrix sum : {of first and second matrix} \n";
    int addition_matrix[r1][c2];
    for(i = 0; i<r1; i++){
        for(j = 0; j<r2; j++){
            addition_matrix[i][j] = 0;
            addition_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
         
        }
    }

    //printing the addition matrix 
    cout<<"-- This matrix is the addition of the first and second matrix -- \n";
    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            cout<<addition_matrix[i][j]<<" \t";

        };
        cout<<"\n";
    };


// -- Subtacting the first and second matrix together - //
    cout<<"Matrix difference : {of first and second matrix} \n";
    cout<<" { This First Matrix - Second Matrix } \n";
    
    int subtraction_matrix[r1][c2];
    for(i = 0; i<r1; i++){
        for(j = 0; j<r2; j++){
            subtraction_matrix[i][j] = 0;
            subtraction_matrix[i][j] = first_matrix[i][j] - second_matrix[i][j];
         
        }
    }

    //printing Subtaction  matrix 
    cout<<"-- This matrix is the subtraction of the first and second matrix -- \n";
    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            cout<<subtraction_matrix[i][j]<<" \t";

        };
        cout<<"\n";
    };

    //This is the multiplicaton  matrix
    cout<<"-----This is Multiplicaton matrix ------------------------\n\n\n\n\n {Multiplication of the second matricx} \n\n\n\n\n\n\n";
    cout<<"{Thus is first[row][column] * second[row][column] \n";
    int multiplied_matrix[r1][c1];
    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            multiplied_matrix[i][j] = 0;
            multiplied_matrix[i][j] = first_matrix[i][j] * second_matrix[i][j];

        }
    }

    //printing the multipied matrix
    for(i = 0; i<r1; i++){
        for(j = 0; j<c2; j++){
            cout<<multiplied_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
