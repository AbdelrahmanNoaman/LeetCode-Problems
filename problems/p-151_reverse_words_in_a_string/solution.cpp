#include <algorithm>
#include "solution.h"


std::vector<std::string> Solution::split(std::string s){
    std::vector<std::string> result;
    std::string currentString = "";

    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            currentString += s[i];
        }else{
            if(currentString != ""){
                result.push_back(currentString);
                currentString = "";
            }
        }
    }
    if(currentString != ""){
        result.push_back(currentString);
        currentString = "";
    }

    return result;
}
std::string Solution::solve(std::string s){
    std::vector<std::string>splitResult = split(s);
    std::string result = "";

    for(int i=splitResult.size()-1; i>= 0; i--){
        if(i!=splitResult.size()-1){
            result += ' ';
        }
        result += splitResult[i];
    }
    return result;
}

std::string Solution::test(std::string s){
    return solve(s);
}