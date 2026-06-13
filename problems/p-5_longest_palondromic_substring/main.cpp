#include <iostream>
#include <string>
#include "solution.h"

int main(){
    std::string s = "babad";
    Solution LongestPalindromeProblem;
    std::string result = LongestPalindromeProblem.test(s);
    
    std::cout << result;
    return 0;
}