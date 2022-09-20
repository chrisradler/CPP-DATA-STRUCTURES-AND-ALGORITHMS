
#include <iostream>
#include <fstream>
using namespace std;
/*
    this code will read the data.txt file and do the proper calculations, 
    then it will return the answer in a seperate file
*/

void add(int num1, int num2){
  int sum = num1 + num2 ;
  ofstream fout("outputData.txt", ios :: app);
  fout <<num1 <<" + "<<num2<<" = "<<sum<<endl;
  fout.close();
}
void subtract(int num1, int num2){
    int subtraction = num1 - num2 ; 
    ofstream fout("outputData.txt", ios :: app);
    fout << num1 << "-" <<num2<< "=" <<subtraction << endl;
    fout.close();
}
void multiply(int num1, int num2){
    int multiplication = num1 * num2 ; 
    ofstream fout("outputData.txt", ios :: app);
    fout << num1 << "*" <<num2 <<"=" << multiplication << endl;
    fout.close();
}
void divide(int num1, int num2){
    int division = num1 / num2 ; 
    ofstream fout ("outputData.txt", ios :: app);
    fout << num1 <<"/" <<num2<< "=" <<division << endl;
    fout.close();
    
}
    


int main()
{
    
    ifstream  fin("Data.txt");
    int num1, num2;
    char opp;
    while(! fin.eof()){
        fin >> num1 ;
        fin >> opp;
        fin >> num2;
        cout << num1<<" "<<opp<<" "<<num2<<endl;
        
        if (opp == '+') {
            add(num1, num2);
        } 
        else if (opp == '-') {
            subtract(num1, num2);
        } 
        else if (opp == '*'){
            multiply(num1,num2);
        }
        else if (opp == '/'){
            divide(num1, num2);
    }
    }
    return 0;
}
