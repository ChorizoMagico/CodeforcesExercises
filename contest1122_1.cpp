#include <iostream>
#include <algorithm>
 
int aux(int t, int a, int b, int c) {
    int maximum = t;

    int minimum1 = std::min(a, b);
    int minimum = std::min(minimum1, c);

    return maximum - minimum;
    }
 
    
 
 
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, t, a, b, c;
    std::cin >> n;

    while(n--){
        std::cin >> t>>a>>b>>c;
        std::cout<<aux(t, a, b, c)<<"\n";
    }
 
 
    return 0;
}