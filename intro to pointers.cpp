
#include <iostream>

using namespace std;

int main()
{
   
   //This code is an introduction to pointers
   int num =30;
   int* ptr = &num;
   
   cout <<" num value = "<<num<<endl;
   cout <<" num address = "<< &num <<endl;
   cout <<" address of num through ptr = "<< ptr<<endl;
   cout <<"ptr exists at " << &ptr << endl;
   
   cout <<" the value of num accessed by ptr " << *ptr << endl;
   
   *ptr = 50;
   
   
   cout <<" The updated values of num = "<<num<<endl;
   
   string name = "Chris Radler" ; 
   string* namePtr = &name ;
   cout << "the name is " << name << endl;
   cout << "the address of the name " << &name << endl;
   cout << "the address of the name through ptr" << namePtr << endl;
   cout << "ptr exists at " << &namePtr << endl;
   
   cout <<"Enter the updated  name >> ";
   cin >> *namePtr; 
   
   cout << "the updated name is " << *namePtr << endl;
   
   
    return 0;
}
