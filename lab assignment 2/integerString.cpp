#include <iostream>
using namespace std;

int main(){
    
    int* p =  new int();

     cout << "Enter the value of int" << endl;
     cin >>  *p;
    

    string * pointer = new string;
    cout << "Enter the string character : " << endl;
    cin >> *pointer;

    cout << "The value of integer is : "<< *p<<endl;
    cout << "The value of the string is : " <<  *pointer << endl;

    delete p;
    delete pointer; 
     return 0;
}
