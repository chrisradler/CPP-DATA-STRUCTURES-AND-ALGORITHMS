/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std ;

/*
This code will create a jagged array, fill it,  add up all of the values in the array,
and display to the console
*/

void filler(int** arr, int row, int* colCount){
    for (int x=0;x<row; x++){
        for (int y=0;y<colCount[x];y++){
            cout << "please enter a number ";
            cin >> arr[x][y];
        }
    }
}
void display(int** arr, int row, int* colCount){
    for (int x=0;x<row; x++){
        for (int y=0;y<colCount[x];y++){
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
}
int addArray(int** arr, int row, int* colCount){
    int result = 0;
    for (int x=0;x<row; x++){
        for (int y=0;y<colCount[x];y++){
            result = result + arr[x][y] ;
        }
    }
    cout << "the total amount of the array is " << result ; 
}



int main()
{
    int** arr ; 
    
    int row; 
    int col ;
    cout <<  "how many rows are there?";
    cin >> row ;
    
    
    arr = new int*[row];
    int* colCount = new int[row];
    
    for (int x=0;x<row;x++){
        cout << "how many columns for ["<<x<<"]?" ;
        cin >> col ;
        arr[x] = new int[col];
        colCount[x] = col;
    }
    filler(arr, row,colCount);
    display(arr,row,colCount);
    addArray(arr, row, colCount);
    

    return 0;
}


