#include <iostream>
#include "solution.h"

int main(){
    int x = 121;
    
    Solution PalindromeNumberProblem;
    bool result = PalindromeNumberProblem.test(x);
    
    std::cout << (result ? "true" : "false");
    return 0;
}