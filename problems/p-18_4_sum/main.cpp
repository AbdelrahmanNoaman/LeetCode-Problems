#include <vector>
#include "solution.h"

int main(){
    std::vector<int> values = {1, 0, -1, 0, -2, 2};
    int target = 0;
    
    Solution FourSumProblem;
    // The test function completely manages execution, formatting, and console output
    FourSumProblem.test(values, target);
    
    return 0;
}