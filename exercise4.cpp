#include <iostream>
using namespace std;

int main(){
    int userInput;
    //Prompt the user for an integer value bewteen 5 and 10
    cout << " Enter an integer value between 5 and 10";

    //loop until a valid integer between 5 and 10 is entered
    while (true){
        //check if the value entered is valid
        if(!(cin :: >> userInput)){
            cin.clear() ; //clear error flags
            cin.ignore (numeric_limits<streamsize>::max(),'\n');//discard invalid input
            cout << "Invalid input. Please enter an integer value between 5 and 10";
        else if(userInput < 5 || userInput > 10){
            cout << "Input value must be between 5 and 10. Please try again:"
        }else {
            break;
        }    
        }
        //output staement ti inform the user that their input value has been accepted
        cout << "Your input value of " << userIput << "has been accepted." << endl;
    } 
    return 0;
}