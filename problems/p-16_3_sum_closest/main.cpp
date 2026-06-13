#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int> values = {-1, 2, 1, -4};
    int target = 1;
    
    Solution ThreeSumClosestProblem;
    int result = ThreeSumClosestProblem.test(values, target);
    
    std::cout << result;
    return 0;
}