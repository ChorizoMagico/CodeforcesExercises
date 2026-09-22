#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int aux(std::string s, int size) {
    
    int counter1 = 0;
    int counter0 = 0;

    int total0 = 0;
    int counter = 0;
    bool flag = false;

    vector<int> cases;
    cases.reserve(size);

    //Ver si está ordenada
    for(int i = 0; i<size; i++){
        if(s[i] == '1'){
            flag = true;
        }

        if(s[i] == '0' and flag){
            flag = false;
            break;
        }

        if(i+1 == size){
            return 0;
        }
    }


    //contar ceros
    for(int i = 0; i<size; i++){
        if(s[i] == '0'){
            total0++;
        }
    }

    //Caso empieza con 1
    if(s[0] == '1'){
        for(int i = 0; i < size; i++){
            if(s[i] == '0'){
                //s[i] = '1';
                counter++;
            }
            
        }
        return counter;
    }else{
        int ones_before=0;
        //Caso empieza con 0 y transformo en 1
        for(int i = 0; i < size; i++){
            if(s[i]=='0'){
                total0--;
            }else if(s[i]=='1'){
                cases.push_back(ones_before+total0);
                ones_before++;
            }
        }
        counter1 = *min_element(cases.begin(), cases.end());

        //Caso empieza con 0 y transformo en ceros
        for(int i = 0; i < size; i++){
            if(s[i] == '1'){
                counter0++;
                //s[i] = '0';
            }
        }

    }

    if(counter1  == counter0){
        counter = counter1;
        
    }else{
        counter = min(counter1, counter0);
    }
    
    return counter;
    }
 
    
 
 
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, size;
    std::string s;
    std::cin >> n;
    
    while(n--){
        std::cin >> size >> s;
        std::cout<< aux(s, size)<<"\n";
    }
 
    return 0;
}