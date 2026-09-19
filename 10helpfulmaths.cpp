#include <iostream>
#include <string>



std::string aux(std::string sequence) {
        

        int frequency1, frequency2, frequency3, size;

        frequency1 = 0;
        frequency2 = 0;
        frequency3 = 0;
        size = sequence.length();

        for (int i=0; i < size; i= i+2){
            if(sequence[i] == '1'){
                frequency1++;
            }else if (sequence[i] == '2')
            {
                frequency2++;
            }else if (sequence[i] == '3')
            {
                frequency3++;
            }
            
            
        }

        for (int i = 0; i < size; i+=2){
            if(frequency1 != 0){
                sequence[i] = '1';
                frequency1 = frequency1 - 1;
            }else if (frequency2 != 0)
            {
                sequence[i] = '2';
                frequency2 = frequency2 - 1;
            }else if (frequency3 != 0)
            {
                sequence[i] = '3';
                frequency3 = frequency3 - 1;
            }

            if(i != size - 1){
                sequence[i+1] = '+';
            }
            
            
        }

        return sequence;
    }
 
    
 
 
int main(){
    std::string sequence;
    std::cin >> sequence;

    std::cout<< aux(sequence);
 
 
    return 0;
}