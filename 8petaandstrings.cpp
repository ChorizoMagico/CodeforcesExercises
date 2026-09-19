#include <iostream>
#include <string>



int main(){

    int a;

    std::string word1, word2;

    std::cin>>word1>>word2;

    a = 0;

    for(int i = 0; i < word1.length(); i++){
        char letterA = tolower(word1[i]);
        char letterB = tolower(word2[i]);

        if(letterA > letterB){
            a = 1;
            break;
        }else if (letterA < letterB)
        {
            a = -1;
            break;
        }
        
    }

    std::cout<<a;

    return 0;
}