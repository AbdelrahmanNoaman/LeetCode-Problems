#include<iostream>
#include "solution.h"

int main(){
    Solution EqualRowAndColumnPairs;
    std::vector<std::vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};
    std::cout<< EqualRowAndColumnPairs.test(grid);
    return 0;
}