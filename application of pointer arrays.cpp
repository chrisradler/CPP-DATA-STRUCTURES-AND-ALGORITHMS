
#include <iostream>

using namespace std;

/* This code will accept an array of size 8 and will return an array 
of size 4 with the even indexed values of the array. 
*/

void filler(int *arr, int size){
    
    for(int x=0; x< size;x++){
        cout <<" Enter value >> ";
        cin >>arr[x];
    }
    
}

int* returnArr(int * arr){
    
    return arr;
    
}
// This method will return the values at the even index's of the pointer
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
    
    cout <<"1st index = "<<arr[0]<< endl;
    int* smallArr = evenIndex(myArr,8) ; 
    cout <<"array is as follow \n";
    display(smallArr, 4) ; 
    


    return 0;
}


