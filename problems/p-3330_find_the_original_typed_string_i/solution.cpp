#include "solution.h"
#include <cmath>

int Solution::solve(std::string s){
    int numberOfRepetitions = 0;
    char lastChar = s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==lastChar){
            numberOfRepetitions++;
        }else{
            lastChar=s[i];
        }
    }
    return numberOfRepetitions+1;
}

int Solution::test(std::string s){
    return solve(s);
}