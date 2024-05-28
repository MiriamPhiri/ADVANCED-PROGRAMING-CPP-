#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(const string& text){
    int count = 0;
    for (char c : text){
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++
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
    int lenght = text.length();
    for (int i = 0, i < lenght / 2; i++){
        swap(reversedText[i], reversedText[lenght - i - 1]);
         }
   return reversedText;      
}
string capitalizeSecondLtter(const string& text){
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

int main(){
    string fileData;
    if stream file ("text_file.txt");

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
        string capitalizedStatement = capitalizedSecondLtter(fileData);
        cout << "Statement with second letter capitalized : " << capita;izedStatement << endl;
    }else{
        cout << "Unable to open file." << endl;
    } 

    return 0;
}



