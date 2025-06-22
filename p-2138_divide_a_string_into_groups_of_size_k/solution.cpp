#include "solution.h"

std::vector<std::string> solve(std::string s,int k,char fill){
    std::string currentString = "";
    std::vector<std::string>result;

    for(int i=0;i<s.size();i++){
        if(i%k==0){
            if(currentString != ""){
                result.push_back(currentString);
            }
            currentString = s[i];
        }else{
            currentString += s[i];
        }
    }

    while(currentString!="" && currentString.size() < k){
        currentString+=fill;
    }
    if(currentString != ""){
        result.push_back(currentString);
    }
    return result;
}