/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;
// This code will read the data.txt file, fill a jagged array and display it



//this function will count the number of rows
int rowCount() {
    int rowCounter = 0; 
    string name;
    fstream fin("Data.txt");
    while (! fin.eof()){
        getline(fin, name);
        rowCounter++;
    } 
    cout << "the number of rows is " << rowCounter << endl; 
    return rowCounter;
}
// we want to return an array that has the number of columns for each row
int* colCounter(int row){
    int *colCount = new int[row];
    string name; 
    fstream fin("Data.txt");
   
   for(int x =0; x<row; x++){
    
        int col =0;
       while(fin >>name){
            if (name == "$"){
                 break;
                
            }
            col++;
       }
       colCount[x] = col;
       
   }  
    /// cout testing
    for(int x =0 ;x<row;x++){
        cout << "row ["<<x<<"] col size is >>  "<<colCount[x]<<endl;
    }
    
    return colCount;
    
}
void filler(string** arr, int row, int* colCount){
    fstream fin("Data.txt");
    for (int x = 0; x < row; x++){
        for (int y = 0; y < colCount[x]; y++){
            string name;
            fin >> name;
            
            if(name == "$"){
                fin >> name;
                arr[x][y]= name;
                
            }
            else{
                arr[x][y] = name;
            }
            
        }
    }
}
void display(string** arr, int row, int* colCount){
    for (int x = 0; x < row; x++){
        for (int y = 0; y < colCount[x]; y++){
            cout << arr[x][y]<< " ";
        }
        cout << endl;
    }
}

int main()
{
    // make a random array make a data.txt. write a few names and read from the file in a jagged array. then fill it and display it 

    int row;
    
    row = rowCount();
    string** arr = new string*[row];
    
    int * colCount = colCounter(row);
    
    for (int x = 0; x < row; x++){
        arr[x] = new string[colCount[x]];
    }
    
    filler(arr, row,colCount);
    display(arr, row, colCount);
    
    

    return 0;
}