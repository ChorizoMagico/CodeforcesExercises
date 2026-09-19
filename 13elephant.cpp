#include <iostream>
 
int aux(int x) {
        
    int c = 0;

    while (x != 0){
        
        for(int i = 5; i > 0; i--){
            if(x >= i){
                x = x-i;
                c++;
                break;
            }}
        
    }

    return c;
    }
 
    
 
 
int main(){
    int x;
    std::cin >> x;
    
    std::cout<<aux(x);

    return 0;
}