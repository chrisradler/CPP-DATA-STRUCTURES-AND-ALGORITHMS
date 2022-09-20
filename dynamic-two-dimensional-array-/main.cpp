
*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;
/* This code will read the data.txt file and store the values into a two dimensional 
dynamic array */

//this method will count the number of rows in the data.txt
int rowCounter(){
    int rowCount = 0;
    ifstream fin("Data.txt");
    while(! fin.eof()){
        string name;
        getline(fin, name);
        rowCount++;
    }
    return rowCount;
}
//this method will count the number of columns in each row
int columnCounter(){
    int colcount = 0;
    string word;
    ifstream fin("Data.txt");
    while(! fin.eof()){
        fin >>word;
        if (word == "#"){
            break;
        }
        colcount++;
    }
    
    return colcount;
}
//this method will fill the array
void filler(string** value, int rowCount, int colcount){
    string name;
    ifstream fin2("Data.txt");
    for (int x =0;x<rowCount;x++){
        for (int y=0;y<colcount;y++){
            
            fin2>> name;
            if(name  != "#"){
                value[x][y] = name;
            }
            else{
                fin2 >>name;
                value[x][y] = name;
            }
        }
    }
}
void display(string** value, int rowCount, int colcount){
    ifstream fin("Data.txt");
    for (int x =0;x<rowCount;x++){
        for (int y=0;y<colcount;y++){
            cout << value[x][y] << " ";
        }
        cout << endl;
    }
    
}



int main()
{
    string** value ;
    
    int row = rowCounter();
    int col = columnCounter();
     
    value = new string*[row] ;
    for(int x =0 ; x <row;x++){
        
        value[x] = new string[col];
    } 
    filler(value, row, col);
    display(value, row, col);
    
    

    return 0;
}
