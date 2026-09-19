#include <iostream>


bool numbers(int a, int b, int c){
    int counter = a + b + c;

    if (counter > 1){
        return true;
    }else{
        return false;
    }
    
}

int main (){
    int n, i, a, b, c;
    std::cin >> n;

    i = 0;

    while(n--){
        std::cin >> a >> b>> c;
        if (numbers(a, b, c) == true){
            i++;
        }else{

        }
    }
    std::cout<<i;
    return 0;
}