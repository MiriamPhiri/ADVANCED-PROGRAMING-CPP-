#include <iostream>
using namespace std;

int main(){
    // declare variables 
    // x and y represent rows and columns respectively
    int x, y;
    cout << "Enter number of rows(maximum of 3) : \n" ;
    cin >> x;
    while(true){
        if(x > 3){
            cout << "Please enter a number that is within the limit : ";
              cin >> x;
        }
       break;
    }
   
    cout << "Enter the number of columns(maximum of 3): \n";
    cin >> y;
    while(true){
        if (y > 3){
        cout << "Please enter a number that is within the limit!: ";
        cin >> y;
        }
       break;
    }

    // dynamically allocating memory to an array
    double** Array = new double*[x];
        for(int i = 0; i < x; i++){
            Array[i] = new double[y];
        }

        // inserting values in the array
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cout << "Enter the value of the element at row "<< i + 1 << " and column " << j + 1 << ":";
                cin >> Array[i][j];
            }
        }

        // printing out the array on the console
        cout << "The values of the array are:\n\n";
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cout << Array[i][j] << " ";
            }
            cout << endl;
        }

        // deleting the dynamically allocated memory
        for(int i = 0; i < x; i++){
            delete[] Array[i];
        }
        delete[] Array;
        
    return 0;
}
        
    
    
