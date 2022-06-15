#include <iostream>

using namespace std;

int main()
{
    int num1 ;
    int num2 ;
    
    cout << "Please enter your first number: " << endl;
    cin >> num1 ; 
    
    cout << "Please enter your second number: " << endl;
    cin >> num2 ;
    
    float sum = num1 + num2;
    
    cout << "The sum of the numbers are " << sum << endl;
    
    
    float subtract = num1 - num2;
    cout << "The subtraction of the numbers are " << subtract << endl;
    
    float multiply = num1 * num2;
    cout << "The multiplication of the numbers are " << multiply << endl;
    
    float division = num1 / num2;
    cout << "The division of the numbers are " << division << endl;
    
    float modulus = num1 % num2;
    cout << "The modulus of the numbers are " << modulus << endl;
    
    
    
    
    
    
    

    return 0;
}