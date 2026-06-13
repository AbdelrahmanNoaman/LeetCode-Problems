#include <iostream>
#include <string>
#include "solution.h"

int main(){
    int num = 3749;
    
    Solution IntegerToRomanProblem;
    std::string result = IntegerToRomanProblem.test(num);
    
    std::cout << result;
    return 0;
}