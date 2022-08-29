/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>

/* read the file, info could be different, read the file two times. 1. count the names 2. after seeing how many names are there for the array, then load the data to the console. 
*/

using namespace std;

int nameCounter(){
    int count = 0; 
    ifstream fin("Data.txt");
    while(! fin.eof()){
        string name ;
        fin >> name ; 
        count ++;
    }
    
    return count;
}
void filler(string* myNames, int count){
    ifstream fin("Data.txt");
    for (int x=0;x<count; x++){
        fin >> myNames[x];
    }
}
void display(string* myNames, int count){
    for (int x = 0; x <count ; x++){
        cout << myNames[x] << endl ; 
    }
}
int main()
{
    
    
    int count = nameCounter();
    cout <<" total numbers of names  = "<<count<<endl;
    
    string* myNames = new string[count];
    filler(myNames, count);
    display(myNames, count);
    
        
    return 0;
}