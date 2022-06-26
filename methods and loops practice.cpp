#include <iostream>

using namespace std;
// not accepting parameters and not returning result
// you are accepting paremerters but not returning anyThing
// not accepting any parameters but will return the result
// it will accepting the parameters and also return the result
int sum(int num , int num2){
    
    
            int result ; 
            result = num + num2;
        return result;
       
}
int subtraction(int num, int num2) {
    
        
        int result ; 
            result = num - num2;
            return result ; 
}
int mul(int num, int num3){
    
        
        int result ; 
            result = num * num3;
            return result ;
}
int divide(int num, int num3){
    
        
        int result ; 
            result = num / num3;
            return result ; 
}


int main()
{
    int selection =-1;
    
    while (selection != 0){
        cout << "1. addition 2. subtraction 3. mul 4. divide 0. exit " << endl;
        cin >> selection ;
        
        if (selection == 1){
            int num ;
        cout << " Please select a number: " ;
        cin >> num ; 
        int num2 ;
        cout << " Please select a number: " ;
        cin >> num2 ;
         
          int sumResult =  sum(num, num2);
          cout <<"the sum of the numbers is "<<sumResult<<endl;
            
        }
        else if (selection == 2){
            int num ;
        cout << " Please select a number: " ;
        cin >> num ; 
        int num2 ;
        cout << " Please select a number: " ;
        cin >> num2 ;
           int subtractionResult = subtraction(num, num2);
           cout << "The subtraction of the two numbers are " << subtractionResult<< endl;
            
        }
        
        
        else if  (selection == 3){
            int num ;
        cout << " Please select a number: " ;
        cin >> num ; 
        int num3 ;
        cout << " Please select a number: " ;
        cin >> num3 ;
            int mulResult = mul(num, num3);
            cout << "The multiplication  of the two numbers are " << mulResult<< endl;
        }
        else if  (selection == 4){
            int num ;
        cout << " Please select a number: " ;
        cin >> num ; 
        int num3 ;
        cout << " Please select a number: " ;
        cin >> num3 ;
            int divideResult = divide( num,  num3);
            cout << "The division of the two numbers are " << divideResult<< endl;
        }
    else {
        cout << "invalid selection" ;
    }
    }
        
    
    
    
    return 0;
}
