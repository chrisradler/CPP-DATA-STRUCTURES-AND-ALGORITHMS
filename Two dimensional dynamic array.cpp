
#include <iostream>

using namespace std;
//This code that will create, fill and display a two dimensional dynamic array 

void arrayFiller(int ** arr, int row ,int col){
    
    for(int x=0;x<row;x++){
        for(int y=0;y <col;y++){
            
            cout <<"Enter value for ["<<x<<"]["<<y<<"]   >> ";
            cin >>arr[x][y];
            
        }
    }
}
void arrayDisplay(int ** arr,int row, int col){
    for(int x=0;x<row;x++){
        for(int y=0;y <col;y++){
            cout <<arr[x][y]<<"  ";
            
        }
        cout <<endl;
    }
}
int main()
{
    //create double pointer
    int **arr; 
     
     int row;
     int col;
     
     cout <<" How many rows do you need >> ";
     cin >> row;
     cout <<" how many coloumns do you need >> ";
     cin >> col;
     
     // we need to convert double pointer into an array of sigle pointers 
     // and then that array will be convert into 2 dynamic array
     
     arr = new int*[row];
     for( int x =0; x<row;x++){
         arr[x] = new int[col];
     }
     
     arrayFiller(arr,row,col);
     arrayDisplay(arr,row,col);

    return 0;
}
