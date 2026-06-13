#include <string>
#include <climits>
#include "solution.h"

int Solution::solve(std::string s){
    int i = 0;
    int n = s.size();
    
    // Ignore leading whitespaces
    while (i < n && s[i] == ' ') {
        i++;
    }
    
    // Check if the next character is '-' or '+'
    bool isNegative = false;
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        isNegative = (s[i] == '-');
        i++;
    }
    
    // Convert digits to number
    int result = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        
        // Check for overflow
        if (result > (INT_MAX - digit) / 10) {
            return isNegative ? INT_MIN : INT_MAX;
        }
        
        result = result * 10 + digit;
        i++;
    }
    
    return isNegative ? -result : result;
}

int Solution::test(std::string s){
    return solve(s);
}