#include <iostream>
#include <unordered_set>
#include <string>


int compare(std::string word, std::unordered_set<char> &different){
    int c = 0;
    for(int i = 0; i < word.length(); i++){
        if( !different.contains(word[i]) ){
            different.insert(word[i]);
            c++;
        }
    }

    return c;
}

int main(){
    std::unordered_set<char> different;
    std::string word;

    std::cin>>word;

    different.reserve(100);

    int number = compare(word, different);

    if(number % 2 == 0){
        std::cout<<"CHAT WITH HER!";
    }else{
        std::cout<<"IGNORE HIM!";
    }
    return 0;
}