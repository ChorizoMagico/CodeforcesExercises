#include <iostream>
#include <string>


void unparser(int &x, std::string command){
    if((command[0]=='+') or (command[2]=='+')){
        x++;
    }else{
        x--;
    }

}


int main (){
    int n, x;
    std::string input;
    x = 0;
    std::cin >> n;

    while(n--){
        std::cin >> input;
        unparser(x, input);
    }
    
    std::cout<<x;
    return 0;
}