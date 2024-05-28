#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //create and open a text file
    ofstream MyFile("exampleFile.txt");
    //Close the file
    MyFile.close();
    return 0;
}