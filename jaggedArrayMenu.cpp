/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
/*
This code will create and fill a jagged array, sort each row, calculate the biggest
value in the row, add up each value in each row, and then display the row
that has the biggest value.
*/

//Fill the array
void filler(int** arr, int row, int* colCount){
    for (int x = 0; x<row; x++){
        for (int y=0; y<colCount[x]; y++){
            cout << "please select a number"<< endl;
            cin >> arr[x][y] ; 
        }
    }
}
//Display onto the console
void display(int** arr, int row, int* colCount){
    for (int x = 0; x<row; x++){
        for (int y=0; y<colCount[x]; y++){
            cout << arr[x][y] << " ";
        }
        cout << endl; 
    }
}
// This function will return the biggest value
void biggestNum(int** arr, int row, int* colCount){
    int biggest = arr[0][0];
    for (int x = 0; x<row; x++){
        for (int y=0; y<colCount[x]; y++){
            if (biggest < arr[x][y]){
                biggest = arr[x][y];
            }
        }    
    }
    cout << "the biggest number is " << biggest << endl; 
}
/*
This method that will accept the jagged array, and will print the number of
the row that has the biggest sum, and the sum of the row.
*/

void rowSum2(int** arr, int row, int* colCount){
 
 int maxSum =arr[0][0];
 int maxRowNum =0;
 
 for(int x=0; x< row;x++){
     
     int sum =0;
     for(int y =0; y < colCount[x];y++){
         sum += arr[x][y];
         
     }
     cout <<" sum  = "<<sum<<endl;
     
     
     if(sum >= maxSum){
         maxSum = sum;
         maxRowNum =x;
     }
 }
 
    cout <<" max sum  is "<<maxSum<<" row "<<maxRowNum<<endl;
}
// This method will accept an array and row number and then it will sort that row
void rowSort3(int** arr, int totalRows, int* colCount){
    
    for (int row =0; row < totalRows; row++){
        
        for (int y = 0; y < colCount[row]; y++){
            for (int z = y+1 ; z < colCount[row];z++){
                if (arr[row][y] > arr[row][z]){
                    
                    int temp = arr[row][y];
                    arr[row][y] = arr[row][z];
                    arr[row][z] = temp ;
                }
            }
        }
    }
}
void rowSortPart2(int** arr, int row, int rowToSort, int* colCount){
    for (int x = 0; x<colCount[rowToSort]; x++){
        for (int y = x+1; y < colCount[rowToSort]; y++){
            if (arr[rowToSort][x] > arr[rowToSort][y]){
                int temp = arr[rowToSort][x];
                arr[rowToSort][x] = arr[rowToSort][y];
                arr[rowToSort][y] = temp ;
            }
        }
    }
    
}
 



// This method will accept the jagged array and will sort each row smallest to biggest
void rowSort(int** arr, int row, int* colCount){
     for(int x=0; x< row;x++){
        
        rowSortPart2(arr,row,x,colCount);
    }
}
    

    



int main()
{
    int** arr ; 
    int row ; 
    int col ;
    cout << "how many rows are there? ";
    cin >> row ; 
    
    arr = new int*[row] ; 
    int* colCount = new int[row];
    
    for (int x=0; x<row;x++){
        cout << "how many columns in ["<<x<<"] row?" << endl;
        cin >> col ; 
        arr[x] = new int[col];
        colCount[x] = col;
    }
    filler(arr, row, colCount);
    display(arr, row, colCount);
    cout <<endl<<endl;
    rowSort3(arr,row,colCount);
    display(arr, row, colCount);
    biggestNum(arr, row, colCount);
    rowSum2(arr,row,colCount);
    rowSort(arr, row, colCount);
    


    return 0;
}






