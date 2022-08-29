/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name[3];
    int age[3];  
    float height[3];
    
    string sAge;
    
    ifstream fin("Data.txt");
    for(int x =0; x< 3;x++){
        getline(fin, name[x], ',');
        getline(fin, sAge, ',');
        age[x] = stoi(sAge);
        fin >> height[x];
        
        
    }
    
    for(int x =0; x< 3; x++){
        
        cout << "The name is "<< name[x]<< endl;
        cout << "The age is " <<age[x] << endl;
        cout <<"the height is "<< height[x] << endl;
    }
    
    return 0;
}
