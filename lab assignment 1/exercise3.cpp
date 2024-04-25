#include <iostream>
#include <string>
using namespace std;

int main(){
    //declare and initialize the array
    string elements[] = {"B123", "C234","A345", "C15", "B177", "G3003", "C235", "B179" };
     
     //iterate through each element of the array
     for (const string& element : elements){
        //check for elements that start with  the letter B
    if (element[0] == 'B'){
        cout << element << endl;
    }
     }

return 0;





}