#include <iostream>

using namespace std;
void  fillArray(int number[5])
{
    for (int x = 0; x < 5; x++){
        cout << "Please enter a number: ";
        cin >> number[x];
    }
    
    
}
void arrayDisplay(int number[5]){
    for (int x = 0; x < 5; x++){
        cout << "your number is: " << number[x] << endl;
    }
}

int arraySum(int number[5]){
    int result = 0;
    for (int x = 0; x < 5; x++){
        result = result + number[x];
        
    }
    return result ; 
}
int biggestValue(int number[5]){
    int max = number[0];
    for (int x = 0; x < 5; x++){
        if (max < number[x]){
        max = number[x];
        }
    }
    return max;
    
}
void smallestValue(int number[5]){
    int small = number[0];
    for (int x = 0; x < 5; x++){
        if (small > number[x]){
            small = number[x];
        }
    }
    cout << "The smallest number is " << small << endl;
}
void numberSearch(int number[5]){
    
    bool isFound  = false;
    int num;
    cout << "Please enter a number: " << endl;
    cin >> num ;
    for (int x = 0; x < 5; x++){
      if (num == number[x]){
        cout << "The number is correct" << endl;
        isFound = true;
      }
    }
    
    if(isFound == false){
        cout << "number does not exist"<< endl;
    }

    

}
void arraySorting(int number[5]){
   for (int x = 0 ; x < 5 ; x++){
       for (int y = x + 1 ; y < 5; y++){
       
       if (number[x]> number[y]){
           
           int temp = number[x];
           number[x] = number[y];
           number[y] = temp;
       }
       }
    
   }
}
int main()
{
   int number[5] ; 
    int sel;
    do {
         cout << "press 1. add new values\n 2. display all values\n 3. find biggest value \n 4. find smallest value \n 5. search a value \n 6. sort the values \n 0. exit " << endl;
         cin >> sel;
        if (sel == 1){
            fillArray(number);
            }
        else if (sel == 2){
             arrayDisplay(number);
        }
        else if (sel == 3){
            int maxNum = biggestValue(number);
            cout << "the biggest value is " << maxNum << endl; 
        }
        else if (sel == 4) {
            smallestValue(number);
        }
        else if (sel == 5){
            numberSearch(number);
        }
        else if (sel == 6){
            arraySorting(number);
        }
        else {
            cout << "invalid selection" << endl ; 
        }
        
    }while(sel !=0);
    


    return 0;
}
