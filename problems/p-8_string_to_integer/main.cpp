#include <iostream>
#include <string>
#include "solution.h"

int main(){
    std::string s = "   -42";
    
    Solution AtoiProblem;
    int result = AtoiProblem.test(s);
    
    std::cout << result;
    return 0;
}