#include <iostream>
 
int aux(int cost, int money, int total) {
    
    int sum = 0;
    int result;

    for(int i=1; i < (total+1); i++){

        sum = sum + (i*cost);

    }
    result = sum - money;

    if(result < 0){
        result = 0;
    }

    return (result);
    }
 
    
 
 
int main(){
    int cost, money, total;
    std::cin >> cost>> money>> total;
 
    std::cout <<aux(cost, money, total);
    return 0;
}