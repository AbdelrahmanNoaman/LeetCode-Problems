#include <iostream>
#include <vector>
#include <string>
#include "solution.h"

int main(){
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    
    Solution LongestCommonPrefixProblem;
    std::string result = LongestCommonPrefixProblem.test(strs);
    
    std::cout << result;
    return 0;
}