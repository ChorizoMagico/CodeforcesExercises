#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>
 
void aux(std::string &word) {
    
    int size = word.length();
    std::unordered_map<int, char> uppers, lowers;

    uppers.reserve(size);
    lowers.reserve(size);

    size = word.length();

    for(int i=0; i < size; i++){
        if(std::isupper(word[i]) ){
            uppers[i] = word[i];
        }else{
            lowers[i] = word[i];
        }
    }

    if(uppers.size() > lowers.size()){

        while(!lowers.empty() ){
            auto iterator = lowers.begin();
            char letter = iterator -> second;
            int index = iterator -> first;
            
            word[index] = toupper(letter);
            lowers.erase(iterator);
        }

    }else{
        while(!uppers.empty() ){
            auto iterator = uppers.begin();
            char letter = iterator -> second;
            int index = iterator -> first;

            word[index] = tolower(letter);
            uppers.erase(iterator);
        }
    }
    
    }
 
    
 
 
int main(){
    std::string word;
    std::cin >> word;
 
    aux(word);

    std::cout <<word;

    return 0;
}