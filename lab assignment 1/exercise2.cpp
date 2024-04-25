#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

int main(){
// generate a random no. between 0 and 11
srand(time(0)); //seed the random no. generator
int daysUntilExpiration = rand() % 12 // there 12 numbers between 0 and 11
 
 // output message based on the switch statements
 switch(daysUntilExpiration){
 
    case 0: cout << "Your subscription has expired" << endl;
    break;
    case 1: cout << "Your subscription exoires within a day!\n"; << endl;
        cout << "Renew now and save 20%!" << endl;
    case 2:



    case 5: cout << "Your subscription expires in " << daysUntilExpiration<< "days.\n" << endl;
         cout << "Renew now and save 10%!" << endl; 
     case 6:




    case 10: cout<< "Your subscription will expire soon. Renew now!" << endl;
     default:
        cout << "You have an active subscription" << endl;
    break;
 }
}