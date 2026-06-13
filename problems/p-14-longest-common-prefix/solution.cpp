#include <vector>
#include <string>
#include "solution.h"

std::string Solution::solve(std::vector<std::string>& strs){
    std::string prefix = "";

    for(int i=0; i<strs[0].size(); i++){
        char currentLetter = strs[0][i];

        for(int j=1; j<strs.size(); j++){
            if(i >= strs[j].size() || strs[j][i] != currentLetter){
                return prefix;
            }
        }
        prefix += currentLetter;
    }
    return prefix;
}

std::string Solution::test(std::vector<std::string>& strs){
    return solve(strs);
}