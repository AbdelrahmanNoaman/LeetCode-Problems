#include "solution.h"


std::string Solution::solve(std::string s){
    std::string result = "";

    for(int i=0;i<s.size();i++){
        if(s[i]=='*'){
            result.pop_back();
        }else{
            result+=s[i];
        }
    }

    return result;
}

std::string Solution::test(std::string s){
    return solve(s);
}