/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>


using namespace std;
void dataInput(string model[4], int price[4], int year[4], int quantity[4]){
     ifstream fin("Data.txt");
    for (int x = 0; x<4; x++){
        fin >> model[x];
        fin >> price[x];
        fin >> year[x];
        fin >> quantity[x];
    }
}
void displayData(string model[4], int price[4], int year[4], int quantity[4]){
    for (int y = 0; y <4; y++){
        cout << "the model of the car is "<<model[y]<< endl;
        cout << "the price of the car is " << price[y] << endl;
        cout << "the year of the car is " << year[y]<< endl;
        cout << "this is the quantity of the car we have " <<quantity[y]<<endl;
        cout <<"---------------------------------------------\n\n";
    }
}
void findModel(string model[4], int price[4], int year[4], int quantity[4]){
    string make ; 
    cout << "What model are you looking for? " << endl;
    cin >> make ; 
    fstream fin("Data.txt");
    for (int x =0 ; x < 4; x++){
        if (make == model[x]){
            cout << "We have "<<model[x] << " in stock" << endl; 
        }
    }
}
void cheapestCar(string model[4], int price[4], int year[4], int quantity[4]){
    int cheapest = price[0];
    fstream fin("Data.txt");
    for (int x=0;x<4;x++){
         if (cheapest > price[x]){
             int temp = cheapest;
             cheapest = price[x];
             price[x] = temp;
         }   
        
    }
    cout << cheapest << endl; 
}
void findYear(string model[4], int price[4], int year[4], int quantity[4]){
    int make ; 
    cout << "What year are you looking for? "  << endl;
    cin >> make ; 
    for (int x=0; x<4; x++){
        if (make == year[x]){
            cout << "We have the year you are looking for " << make << endl;
        } 
    }
}
void updatePrice(string model[4], int price[4], int year[4], int quantity[4]){
    int cost ;
    int change ; 
    cout << "what price do you want to change" << endl;
    cin >> cost;
    for (int x=0; x<4; x++){
        if (cost == price[x]){
            cout << "what do you want the new price to be?" << endl;
            cin >> change;
            price[x] == change;
        }
        
    }
}
void purchaseCar(string model[4], int price[4], int year[4], int quantity[4]){
    string car ; 
    bool isFound = false;
    cout << "what model of car do you want to purchase? " << endl;
    cin >> car ; 
    for (int x = 0; x < 4; x++){
        if (model[x] == car ){
            isFound = true;
            if (quantity[x] > 0){
                quantity[x] = quantity[x] - 1 ;
                cout <<model[x]<<" is sold for  "<<price[x]<<" and Remaining stock  ="<<quantity[x]<<endl;
            } 
            else{
                cout << "not enough stock" ;
            }
        }
    }
    if (isFound == false){
        cout << "invalid selection";
    }
}
void newInventory(string model[4], int price[4], int year[4], int quantity[4]){
    string newCar ;
    int amount;
    bool isFound = false ; 
    cout << "what kind of cars did we add to the inventory? " << endl;
    cin >> newCar ; 
    cout << " how many of those cars did we get ?" << endl;
    cin >> amount ; 
    for (int x = 0; x < 4; x++){
        if (newCar == model[x]){
            isFound = true ; 
            quantity[x] = quantity[x] + amount ; 
            cout << " we have " << quantity[x] << " total cars of " << model[x]<< endl;
        }
        }
        if (isFound == false){
            cout << "sorry we do not sell those cars";
        }
    }
void dataUpdate(string model[4], int price[4], int year[4], int quantity[4]){
    ofstream fout("Data.txt");
    
    for(int x =0; x< 4;x++){
        fout <<model[x]<<" "<<price[x]<<" "<<year[x]<<" "<<quantity[x]<<endl;
    }
    fout.close();
    cout <<"-------------------Data updated Successfully----------------------\n";
    
}

int main()
{
    string model[4];
    int price[4];
    int year[4];
    int quantity[4];
    
    dataInput(model,price,year,quantity);
    int sel ;
    do{
        
        cout << "press \n 1. display available costs \n 2. find a car by model \n 3. find the cheapest car \n 4. find car by year \n 5. update price of a car \n 6. purchase a car \n 7. add new car in inventory \n 0. exit \n selection >> ";
         cin >> sel;
         if(sel ==1){
             displayData(model,price,year,quantity);
         }
         else if (sel ==2){
             findModel(model,price,year,quantity);
         }
         else if (sel ==3){
             cheapestCar(model,price,year,quantity);
         }
         else if (sel == 4){
             findYear(model,price,year,quantity);
         }
         else if (sel == 5){
             updatePrice(model,price,year,quantity);
         }
         else if (sel == 6){
             purchaseCar(model,price,year,quantity);
         }
         else if (sel == 7){
             newInventory(model,price,year,quantity);
         }
         else if(sel ==0){
             dataUpdate(model,price,year,quantity);
             cout <<" Have a nice day :) "<<endl;
             
         }
         else{
             cout <<"Invalid Selection , Try Again \n";
         }
        
    }while(sel !=0 );
    

    return 0;
}