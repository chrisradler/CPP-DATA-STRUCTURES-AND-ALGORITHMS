/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <fstream>

using namespace std;
/*This code will read the data.txt file and store the data into a vector. This code 
will be able to search for a number and also sort the vector.*/


void filler(vector<int> &num){
     int temp;
     fstream fin("Data.txt");
    while (! fin.eof()){
        fin >> temp ;
        num.push_back(temp);
    }
    
}
void display(vector <int> num){
    for (int x=0; x<num.size();x++){
        cout << num[x];
        cout << endl;
    }
}
/*This method will allow the user to look for a number in the vector. Then it will
delete that value from the dataset.*/
void searchNum(vector <int> &num){
    bool isFound = false;
    int number;
    cout << "search for a value " << endl;
    cin >> number;
    for (int x=0;x<num.size();x++){
        if (number == num[x]){
            cout << "we found the number " << number << endl;
            
            num.erase(num.begin() + x );
            cout <<" Value Deleted successfully :) "<<endl;
            
            isFound = true;
            
            
            
        }
    }
        if (isFound == false){
        cout << "sorry we do not have that number" << endl;
    }
}
// This method will sort the vector
void sortVector(vector <int> &num){
    
    for (int x=0;x<num.size();x++){
        for (int y=x+1;y<num.size();y++){
            if (num[x] > num[y]){
                int temp = num[x];
                num[x] = num[y];
                num[y] = temp;
            }
        }
    }
}


int main()
{
    
    
    
    
    
    
    
    
    
    vector <int> num ; 
    filler(num);
    display(num);
    searchNum(num);
    
    
    display(num);
    sortVector(num);
    cout <<"-------"<<endl;
    display(num);
    

    return 0;
}
