#include <vector>
#include "solution.h"

int main(){
    std::vector<int> values = {1, 2, 3, 4, 5};
    int n = 2;
    
    Solution RemoveNodeProblem;
    // The test function handles list initialization, processing, and display internals
    RemoveNodeProblem.test(values, n);
    
    return 0;
}