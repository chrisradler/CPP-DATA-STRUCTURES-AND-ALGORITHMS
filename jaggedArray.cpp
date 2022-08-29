/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void filler(string** jkd, int* colCount, int row){
    for (int x=0; x<row; x++){
    for (int y=0;y<colCount[x]; y++){
        cout << "please enter a name" << endl;
        cin >> jkd[x][y];
    }
}
}
void display(string** jkd, int* colCount, int row){
    for (int x=0;x<row; x++){
    for (int y=0;y<colCount[x];y++){
        cout << jkd[x][y] << " ";
    }
    cout << endl;
}
}

int main()
{
 
    string ** jkd;
    
    
    int row;
    cout <<"Enter the row >> ";
    cin >> row;
    jkd = new string *[row];
    
    int *colCount = new int[row];
    
    
    
    
    for(int x =0;x <row;x++){
        int col;
        cout <<" Enter a required number of coloumn  for ["<<x<<"] row >> ";
        cin >>col;
        
        jkd[x] = new string[col];
        colCount[x] = col;
        
    }
     filler(jkd, colCount,row);
     display(jkd,colCount,row);
    




// -----------------------------



//----display code-


    return 0;
}

