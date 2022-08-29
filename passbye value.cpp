/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void arrayFiller(string** arr, int row, int col){
    for(int x=0; x<row; x++){
        for (int y=0;y<col; y++){
            cout <<"please fill in the ["<<x<<"]["<<y<<"]" ;
            cin >> arr[x][y];
        }
    }
}
void arrayDisplay(string** arr, int row, int col){
    for (int x=0;x<row; x++){
        for(int y=0;y<col;y++){
            cout << arr[x][y] <<" " ;
        }
        cout <<endl;
    }
}



int main()
{
    string** arr ;
    int row;
    int col;
    
    cout << "how many rows do we need "<< endl;
    cin >> row;
    cout << "how many columns do we need? " << endl;
    cin >> col ;
    
    arr = new string*[row] ; 
    for (int x = 0; x < row; x++){
        arr[x] = new string[col];
    }
    arrayFiller(arr,row,col);
    arrayDisplay(arr,row,col);
    
    
    

    return 0;
}
