/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void filler(string* myNames, int size){
for (int x = 0 ; x<size;x++){
        cout<< "enter a name " << endl;
        cin >> myNames[x];
}
}
void display(string* myNames, int size){
    
    for (int x = 0; x <size; x++){
        cout << myNames[x] << endl;
    }
}

int main()
{
    
    string * myNames;
    
    int size;
    cout <<" Please enter the size of the array >> ";
    cin >> size;
    
    
    // convert that ptr into an array of string
    
    myNames = new string[size];
    
    filler(myNames, 3);
    display(myNames, 3);
    
  


    
    
    
    return 0;
}
