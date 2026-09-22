#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int aux(vector<int> numbers) {
    int size = numbers.size();
    vector<int> ordered_numbers;
    vector<int> counts;
    ordered_numbers.resize(size);
    counts.resize(size);
    int counter = 0;

    for(int i = 0; i<size; i++){
        ordered_numbers[i] = numbers[i]-i; 
    }

    sort(ordered_numbers.begin(), ordered_numbers.end());
    unique(ordered_numbers.begin(), ordered_numbers.end());

    for(int i = 0; i< size; i++){
        
        if(i == 0){
            counts[counter]++;
        }else if(ordered_numbers[i-1] + 1 == ordered_numbers[i]){
            counts[counter]++;
        }else{
            counter++;
            counts[counter]++;
        }

    }

    return *max_element(counts.begin(), counts.end());
    }
 
    
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, total, each_number;
    vector<int> numbers;
    cin >> n;
 
    while(n--){
        cin >> total;
        numbers.clear();
        numbers.reserve(total);
        while(total--){
            cin >>each_number;
            numbers.push_back(each_number);
        }
        cout<<aux(numbers)<<"\n";
    }
 
    return 0;
}