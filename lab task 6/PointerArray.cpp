#include <iostream>
using namespace std;

int main(){
    int numberArray[5];
    int * pPointer = nullptr;
    //assign the address to the first element to the pointer
    pPointer = numberArray;
    *pPointer = 10; // assign a value to the first element

    /*increment the pointer using pointer arithmetic to assign the address of the second element to the pointer*/
    
}