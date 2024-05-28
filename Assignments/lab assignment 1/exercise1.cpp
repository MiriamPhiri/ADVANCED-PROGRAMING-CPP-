#include <iostream>
#include <cstdlib> //for rand() and srand()
#include <ctime> //for time()
using namespace std;

int main(){
//generate random no. between 0 and 11
// there are 12 numbers between 0 and 11
srand(time(0));//seed the random no. generator
int daysUntilExpiration = rand() % 12;

// output based on the conditions
if(daysUntilExpiration <= 10) {
 cout << "Your subscription will expire soon. Renew now!" << endl;
 }else if(daysUntilExpiration <= 5){
 cout << "Your subscription expires in " << daysUntilExpiration << "days.\n " << endl;
 cout << "Renew now and save 10%" << endl;
 }else if (daysUntilExpiration == 1){
  cout << "Your subscription expires within a day" << endl;
  cout << "Renew and save 20%" << endl;
  }else if (daysUntilExpiration == 0){
  cout << "Your subscription has expired" << endl;
  }else{
  cout <<"You have an aactive subsciption" << endl;
  }
  return 0;
  

 
    
}