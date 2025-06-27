#include "solution.h"
#include <cmath>

int Solution::solve(std::string s){
    int score = 0;
    for(int i=1;i<s.size();i++){
        score += std::abs(s[i]-s[i-1]);
    }
    return score;
}

int Solution::test(std::string s){
    return solve(s);
}