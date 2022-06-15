#include <iostream>

using namespace std;

int main()
{
    int endrange ;
    cout << " Please enter the endrange: " << endl;
    cin >> endrange;
    
    int startrange ; 
    cout << "Please enter the startrange: " << endl;
    cin >> startrange;
    
    int step;
    cout << "How many steps do you want to increase each turn: " << endl;
    cin >> step;
    
    int sum = 0;
    
    
    
    
    if (startrange < endrange){
        
    for (int x = startrange; x <= endrange; x=x+step){
        cout << "x = " <<x << endl;
        sum = sum + x;
    }
    
    cout<<" sum of all the x vallues is "<<sum<<endl;
    }
    else {
        cout << "No sum" << endl;
    }













/*
    

    for (int x =0; x < 20; x++){
        cout<<"x ="<<x<<endl;
    }*/
    return 0;