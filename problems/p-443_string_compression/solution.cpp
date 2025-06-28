#include "solution.h"
#include<iostream>
#include<string>

int Solution::solve(std::vector<char>&chars){
    char currentChar = chars[0];
    int currentSum = 1;
    int updatedIdx = 0;
    for(int i=1;i<chars.size();i++){
        if(currentChar == chars[i]){
            currentSum++;
        }else{
            chars[updatedIdx++] = currentChar;
            if(currentSum > 1){
                std::string digits = std::to_string(currentSum);
                for(int i=0;i<digits.size();i++){
                    chars[updatedIdx++] = digits[i];
                }
            }
            currentSum = 1;
            currentChar = chars[i];
        }
    }
    chars[updatedIdx++] = currentChar;
    if(currentSum > 1){
        std::string digits = std::to_string(currentSum);
        for(int i=0;i<digits.size();i++){
            chars[updatedIdx++] = digits[i];
        }
    }
    return updatedIdx;
}

int Solution::test(std::vector<char>&chars){
    return solve(chars);
}
