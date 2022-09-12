/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

//this code will fill and display a vector of a vector 

void filler(vector<vector<int>> &num){
    
    
    
    for(int x =0; x< 3; x++){
        
        vector<int> row;
        for(int y =0; y<3 ;y++){
            
            int tempNum;
            cout <<" Enter a number >> ";
            cin >> tempNum;
            row.push_back(tempNum); 
            
        }
        num.push_back(row);
    }
    
}

void display(vector<vector<int>> &num){
    for(int x=0;x<num.size();x++){
        for(int y =0; y <num[x].size();y++){
            cout <<num[x][y] << "  ";
        }
        cout <<endl;
    }
    
}
int main()
{
    vector <vector<int>> numbers;
    filler(numbers);
    display(numbers);
    return 0;
}

