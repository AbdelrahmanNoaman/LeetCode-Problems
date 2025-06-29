#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int>values = {0,1,0,3,12};
    Solution MoveZeros;
    MoveZeros.test(values);
    for(int i=0;i<values.size();i++){
        std::cout<<values[i]<<" ";
    }
    return 0;
}