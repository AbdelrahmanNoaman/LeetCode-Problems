#include <iostream>
#include <string>
#include "solution.h"

int main(){
    std::string s = "abcabcbb";
    Solution LongestSubstringProblem;
    int maxLength = LongestSubstringProblem.test(s);
    
    std::cout << maxLength;
    return 0;
}