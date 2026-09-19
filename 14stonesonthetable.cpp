#include <iostream>
#include <string>
 
int aux(int n, std::string combination) {
        
    int i, j, c;
    i = 0;
    j = 1;
    c = 0;
    n--;

    if(n==0){
        return 0;
    }

    while(n--){
        if(combination[i] != combination[j]){
            i = j;
            j++;
        }else{
            j++;
            c++;
        }
    }

    return c;
    }
 
    
 
 
int main(){
    int n;
    std::string combination;

    std::cin >> n>>combination;
    
    std::cout<<aux(n, combination);
 
    return 0;
}