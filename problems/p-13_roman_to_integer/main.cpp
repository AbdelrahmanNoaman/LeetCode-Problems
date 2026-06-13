#include <iostream>
#include <string>
#include "solution.h"

int main(){
    std::string s = "MCMXCIV";
    
    Solution RomanToIntegerProblem;
    int result = RomanToIntegerProblem.test(s);
    
    std::cout << result;
    return 0;
}