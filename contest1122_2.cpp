#include <iostream>
#include <cmath>
#include <algorithm>

int aux(long long a, long long b, long long c) {
    int counter = 0;
    bool turnOfA = true;
    while(counter<2){
        if(turnOfA){
            if( std::abs((c+a) - b) > std::abs(a-b) ){
            a += c;
            c -= c;
            }else{
                counter++;
            }
        }else{
            if( a <= b){
                counter;;
            }else if (c > 0)
            {
                b += std::min(c, a);
                c -= std::min(c, a);
            }else{
                counter++;
            }
            
        }
        
    }

    
 
    return std::abs(a-b);
    }
 
    
 
 
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    long long a, b, c;
    std::cin >> n;
    
    while(n--){
        std::cin >> a>>b>>c;
        std::cout<<aux(a,b,c)<<"\n";
    }
 
    return 0;
}