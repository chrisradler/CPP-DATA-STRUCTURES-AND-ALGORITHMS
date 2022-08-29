#include <iostream>

using namespace std;
void addValues(int arr[3][3]){
    for (int x =0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            cout << "Please enter the numbers for the array ["<<x<<"]["<<y<<"]  >> ";
            cin >> arr[x][y];
        }
        
    }
    
}
void displayValues(int arr[3][3]){
    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3;y++){
            cout << arr[x][y] << "  ";
        }
        cout <<endl;
    }
}
void searchValue(int arr[3][3]){
    bool isFound = false;
    int search ;
    cout << "what number are you looking for? " ;
    cin >> search ; 
    for (int x = 0; x <3; x++){
        for (int y = 0; y < 3; y++){
            if (search == arr[x][y]){
                isFound = true;
                cout << "We found the number "<< search << endl; 
                
            }
            
        }
    }
                if (isFound = false){
                    cout << "we did not find the number " << search ;
                }
             
            }
            
void biggestValue(int arr[3][3]){
    int big = arr[0][0] ;
    for (int x = 0; x < 3; x++){
        for (int y=0;y<3;y++){
            if (big < arr[x][y]){
                big = arr[x][y] ;
            }
        }
    }
    cout << "The biggest number is " << big << endl;
    
}
void updateValue(int arr[3][3]){
    int search ;
    cout << "what number are you looking for? " ;
    cin >> search ; 
    bool isFound = false;
    for (int x=0;x<3;x++){
        for (int y=0;y<3;y++){
            if (search == arr[x][y]){
                cout <<"enter updated value  >> ";
                cin >>arr[x][y];
                cout <<" value updated successfully ";
                isFound = true;
            }
            
        }
    }
    
    if(isFound == false){
        cout <<"Invalid number! ";
    }
}
void average(int arr[3][3]){
    int sum  =0;
    int result ; 
    for (int x = 0; x < 3; x++ ){
        for (int y=0;y<3;y++){
            sum = sum + arr[x][y]; 
            result = sum / 9 ;
        }
    }
    cout << "The average of the numbers is " << result << endl;
    
    
}

int twoDimensional(int arr[3][3], int row){
    int sum = 0; 
        for (int y = 0; y < 3; y++){
            
                sum = sum + arr[row][y];
            
        }
    return sum ;  
    
}
int sorting(int arr[3][3], int row1){
    
    for(int x =0; x<3; x++){
        
        for (int y=x+1 ; y<3;y++){
           
           
                if(arr[row1][x] > arr[row1][y]){
                    int temp = arr[row1][x];
                    arr[row1][x] = arr[row1][y];
                    arr[row1][y] =temp;
                }
                    
            }
        
    }
    return num ; 
}
int rowBiggestNum(int arr[3][3], int row2){
    int biggest = arr[row2][0];
        for (int y = 0; y < 3; y++){
            if (y == row2){
                if (biggest < arr[row2][y] ){
                    biggest = arr[row2][y] ; 
                }
                
            }
        }
        return biggest ;
    }
     

/*
a method that will accept a two dimensional array and a row number and will return the sum of that specific row
- a method that will accept a two dimensional array and a row number and sort the that specific row 
- a method that will accept a two dimensional array and a row number and will give you the biggest value of that row
*/

int main()
{
    int arr[3][3];
    int x ;
    addValues(arr) ; 
    displayValues(arr);
    /*
    do {
        cout<<"Press 1) to add values  in the arr \n 2) display all values \n3) search a value \n4) find the biggest value \n5) update a value\n 6) find the average of a value \n0)exit" << endl ;
        cin >> x ; 
        if(x == 1){
            
        }
        else if (x ==2){
           
        }
        else if (x==3){
            searchValue(arr);
            
        }
        else if (x==4){
            biggestValue(arr);
        }
        else if (x==5){
            updateValue(arr);
        }
       else if (x==6){
           average(arr);
       }
        
        
        
        
    }
    while (x != 0);*/
    int row ; 
    cout << "which row do you want to add?" << endl; 
    cin >> row ;
     int rowSum = twoDimensional(arr, row);
     cout <<" Row Sum  = "<<rowSum<<endl;
     
     int row1 ; 
     cout << "which row do you want to sort? " << endl; 
     cin >> row1 ; 
     
     int row2 ; 
     cout << "which row do you want to find the biggest number? " << endl;
     cin >> row2; 
     int biggestrow = rowBiggestNum(arr, row2);
     cout << "the biggest number in the row is " << biggestrow << endl;

    return 0;
}














