/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

// Write a method named eigible persons that will accept the all the three given arrays and then 
// make a new array from that data with all the persons below 25 years old.


//this method is to see how many lines there are in the data.txt
int countLine(){
    int count = 0 ;
    ifstream fin("Data.txt");
    while(! fin.eof()){
        string name ;
        getline(fin, name);
        count++;
    }
    return count ; 
}
void filler(string* myNames,string* gender,int* age, int count){
    ifstream fin("Data.txt");
    for (int x = 0; x<count; x++){
        getline(fin,myNames[x], ',');
        getline(fin, gender[x], ',');
        fin>> age[x];
    }
}
void display(string*myNames,string* gender, int* age, int count){
    for (int x =0; x<count; x++){
        cout << myNames[x]<<","<< gender[x]<<"," << age[x] << endl;
    }
}


string* eligiblePersons(string* myNames,string* gender,int* age, int count, int& num){
    
    for (int x =0; x<count; x++){
        if (age[x] > 25){
            num ++;
        }
    }
    
    
    
    
    string* youngPerson = new string[num];
    int index=0;
    for (int x =0; x<count; x++){
        if (age[x] < 25){
            youngPerson[index] = myNames[x];
            index ++;
            
        }
    
    }
    return youngPerson;
}
int main()
{
    int count = countLine();
    cout << "the total names are " << count << endl;
    string* myNames = new string[count];
    string* gender = new string[count];
    int* age = new int[count];
    filler(myNames, gender, age, count) ;
    display(myNames, gender, age, count);
    int num = 0;
    
    string * boys = eligiblePersons(myNames, gender, age, count, num);
    cout <<"The people under 25 are as follow "<<endl;
    for (int x=0; x<num; x++){
        cout << boys[x]<<endl;
    }
    
    return 0;
}