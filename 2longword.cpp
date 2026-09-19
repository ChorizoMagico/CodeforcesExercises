#include <iostream>
#include <string>

std::string longWord(std::string word){

    int size = word.length();

    if(size > 10){
        int middleNumber = size - 2;
        char firstLetter =  word[0];
        char lastLetter = word[size-1];

        std::string result = firstLetter + std::to_string(middleNumber) + lastLetter;
        return result;
    }else{
        return word;
    }
}


int main(){
    int n;
    std::cin >> n;

    while (n--){
        std::string word;
        std::cin >> word;

        std::cout<< longWord(word)<<"\n";
        
    }


    return 0;
}