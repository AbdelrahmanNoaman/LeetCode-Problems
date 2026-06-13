#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int> values = {2, 7, 11, 15};
    int target = 9;
    Solution TwoSumProblem;
    std::vector<int> result = TwoSumProblem.test(values, target);
    
    std::cout << "[" << result[0] << ", " << result[1] << "]";
    return 0;
}