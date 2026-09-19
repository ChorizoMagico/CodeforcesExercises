#include <iostream>
 
int aux(int n, int m) {
    int c = 0;

    while( n <= m){
        c++;
        n = n*3;
        m = m*2;
        
    }

    return c;
    }
 
    
 
 
int main(){
    int n, m;
    std::cin >> n >>m;

    std::cout<<aux(n,m);
 
 
    return 0;
}