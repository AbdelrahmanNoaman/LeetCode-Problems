#include <iostream>
#include "solution.h"

int main(){
    int x = 123;
    
    Solution ReverseIntegerProblem;
    int result = ReverseIntegerProblem.test(x);
    
    std::cout << result;
    return 0;
}