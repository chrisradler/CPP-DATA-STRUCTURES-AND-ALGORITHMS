
#include <iostream>

using namespace std;

/*
This code will create a jagged array, fill it with names, and display on the console.
*/

void filler(string** jkd, int* colCount, int row){
    for (int x=0; x<row; x++){
    for (int y=0;y<colCount[x]; y++){
        cout << "please enter a name" << endl;
        cin >> jkd[x][y];
    }
}
}
void display(string** jkd, int* colCount, int row){
    for (int x=0;x<row; x++){
    for (int y=0;y<colCount[x];y++){
        cout << jkd[x][y] << " ";
    }
    cout << endl;
}
}

int main()
{
 
    string ** jkd;
    
    
    int row;
    cout <<"Enter the row >> ";
    cin >> row;
    jkd = new string *[row];
    
    int *colCount = new int[row];
    
    
    
    
    for(int x =0;x <row;x++){
        int col;
        cout <<" Enter a required number of coloumn  for ["<<x<<"] row >> ";
        cin >>col;
        
        jkd[x] = new string[col];
        colCount[x] = col;
        
    }
     filler(jkd, colCount,row);
     display(jkd,colCount,row);
    




// -----------------------------



//----display code-


    return 0;
}


