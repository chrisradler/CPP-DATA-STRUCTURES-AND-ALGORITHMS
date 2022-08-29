/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


void filler(int *arr, int size){
    
    for(int x=0; x< size;x++){
        cout <<" Enter value >> ";
        cin >>arr[x];
    }
    
    
    
}



int* returnArr(int * arr){
    
    
    
   
    return arr;
    
}
/* make a method that will accept an array of size 8 and will return an array of size 4 with the even indexed values of the array. */
int* evenIndex(int* arr, int size){
    int sizeOfNew = size /2;
    int *evenArr = new int[sizeOfNew] ;
    int index =0;
    for (int x = 0; x<size; x++){
        if ( x % 2 == 0){
            evenArr[index] = arr[x] ; 
            index ++;
            
        }
        
    }
    return evenArr;
}

void display (int* arr, int size){
    for (int x = 0; x<size; x++){
        cout << arr[x] << endl; 
    }
}

int main()
{
    int myArr[8];

    filler(myArr,8);
    display(myArr, 8) ; 
    
    int* arr = returnArr(myArr);
    
    cout <<"1st index = "<<arr[0];
    int* smallArr = evenIndex(myArr,8) ; 
    cout <<" Enen array is as follow \n ";
    display(smallArr, 4) ; 
    


    return 0;
}

