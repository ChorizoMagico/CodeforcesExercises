#include <iostream>
#include <vector>


int main(){

    int n, k, c, input, kValue;
    std::cin>> n >> k;
    c = 0;
    kValue = -1;


    while(n--){
        std::cin >> input;
        if((input > 0) and (input >= kValue)){
            c++;
            if( c == k){kValue = input;}
        }else{
            break;
        }
        
    }


    std::cout<<c;

    return 0;
}