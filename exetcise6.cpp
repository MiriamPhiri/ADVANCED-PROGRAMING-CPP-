#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
string reverse (const string& text);
int countWords(const string& text);
int countVowels(const string& text);
string capitalizedSecondLetter(const string& text);


int main(){
    string fileData;
    ifstream file ("text_file.txt");

    if(file.is_open()){
        getline(file,fileData);
        file.close();

        //calculate the output no. of vowels 
        int numVowels = countVowels(fileData);
        cout << "Number of vowels: " << numVowels << endl;

        //calculate and output no. of words 
        int numWords = countWords(fileData);
        cout << "Number of words: " << endl;
        
        //output statement in reverse
        string reversedStatement = reverse(fileData);
        cout << "Reversed statement : " << reversedStatement << endl;

        //output statement with the second letter capitalized
        string capitalizedStatement = capitalizedSecondLetter(fileData);
        cout << "Statement with second letter capitalized : " << capitalizedStatement << endl;
    }else{
        cout << "Unable to open file." << endl;
    } 

    return 0;
}


int countVowels(const string& text){
    int count = 0;
    for (char c : text){
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++;
        }
    }
    return count;
}

int countWords(const string& text){
    int count = 0;
    bool inWord = false;
    for(char c : text){
        if (!isspace(c) && !inWord){
            count++;
            inWord = true;
        }else if (isspace(c)){
            inWord = false;
        }
    }
    return count;
}

string reverse (const string& text){
    string reversedText = text;
    int length = text.length();
    for (int i = 0; i < length / 2; i++){
        swap(reversedText[i], reversedText[length - i - 1]);
         }
   return reversedText;      
}
string capitalizedSecondLetter(const string& text){
    string result = text;
    bool capitalize = false;
    for (char& c : result ){
        if(isalpha(c)){
            if(capitalize){
                c = toupper(c);
                capitalize = false;
            }else{
                capitalize = true;
            }
        }else{
            capitalize = false;
        }
    }
  return result;  
}

