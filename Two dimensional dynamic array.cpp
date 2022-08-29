/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void arrayFiller(int ** arr, int row ,int col){
    
    for(int x=0;x<row;x++){
        for(int y=0;y <col;y++){
            
            cout <<"Enter value for ["<<x<<"]["<<y<<"]   >> ";
            cin >>arr[x][y];
            
        }
    }
}


void arrayDisplay(int ** arr,int row, int col){
    for(int x=0;x<row;x++){
        for(int y=0;y <col;y++){
            cout <<arr[x][y]<<"  ";
            
        }
        cout <<endl;
    }
}



int main()
{
    // int * <- this is a single pointer (a single pointer can be convert into single dimensionla dynamic array)
    // int ** <- this is double pointer (A double pointer could be convert into  2D dynamic array)
    
    int **arr; 
     
     int row;
     int col;
     
     cout <<" How many rows do you need >> ";
     cin >> row;
     cout <<" how many coloumns do you need >> ";
     cin >> col;
     
     // first of all we need to convert double pointer into an array of sigle pointers 
     // and then that array will be convert into 2 dynamic array
     
     arr = new int*[row];
     for( int x =0; x<row;x++){
         arr[x] = new int[col];
     }
     
     arrayFiller(arr,row,col);
     arrayDisplay(arr,row,col);

    return 0;
}