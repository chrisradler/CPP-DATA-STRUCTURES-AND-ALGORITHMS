
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    
//this code will read the data.txt file and print the data to the console

    string name[3];
    int age[3];  
    float height[3];
    
    string sAge;
    
    ifstream fin("Data.txt");
    for(int x =0; x< 3;x++){
        getline(fin, name[x], ',');
        getline(fin, sAge, ',');
        age[x] = stoi(sAge);
        fin >> height[x];
        
        
    }
    
    for(int x =0; x< 3; x++){
        
        cout << "The name is "<< name[x]<< endl;
        cout << "The age is " <<age[x] << endl;
        cout <<"the height is "<< height[x] << endl;
    }
    
    return 0;
}
