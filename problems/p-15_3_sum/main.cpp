#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int> values = {-1, 0, 1, 2, -1, -4};
    
    Solution ThreeSumProblem;
    std::vector<std::vector<int>> result = ThreeSumProblem.test(values);
    
    std::cout << "[";
    for(size_t i = 0; i < result.size(); ++i) {
        std::cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]";
        if(i < result.size() - 1) std::cout << ", ";
    }
    std::cout << "]";
    
    return 0;
}