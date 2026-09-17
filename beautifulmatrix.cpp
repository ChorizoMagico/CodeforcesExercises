#include <iostream>

void turnToCoordinates(int coordinate, int &i, int &j){
    i = coordinate % 5;
    if(i == 0){
        i = 5;
        j = (coordinate / 5);
    }else{
        j = (coordinate / 5) + 1;
    }
    

}

int aproximate(int i, int j){
    int sum = 0;

    if ((i != 3) && (i > 3)){
        sum += i - 3;
    }else{
        sum += 3 - i;
    }

    if ((j != 3) && (j > 3)){
        sum += j - 3;
    }else{
        sum += 3 - j;
    }

    return sum;
}


int main(){

    int i, j, c1, c2;
    bool flag = true;
    c1 = 0;
    c2 = 0;
    while(c2 < 25){
        std::cin >> i;
        if(flag == true){c1++;}
        if(i == 1){flag = false;}
        c2++;
    }
    turnToCoordinates(c1, i, j);
    std::cout<<aproximate(i,j);
    return 0;
}