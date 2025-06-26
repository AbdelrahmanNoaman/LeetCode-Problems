#include <algorithm>
#include "solution.h"


bool isStringMultipleOfDivisor(std::string mainString, std::string divisor){
    int divisorSize = divisor.size() , mainStringSize=mainString.size();
    if(mainStringSize % divisorSize !=0) {
        return false;
    }
    for(int i=0;i<mainStringSize;i+=divisorSize){
        for(int j = i;j < i+divisorSize;j++){
            if(divisor[j%divisorSize] != mainString[j]){
                return false;
            }
        }
    }
    return true;
}

std::string Solution::solve(std::string str1, std::string str2){
    std::string divisor = str1.size() > str2.size() ? str2 : str1;
    const int divisorSize = divisor.size();
    for(int i=0;i<divisorSize;i++){
        std::string temporaryDivisor =divisor.substr(0,divisor.size()-i);
        if(isStringMultipleOfDivisor(str1,temporaryDivisor) && isStringMultipleOfDivisor(str2,temporaryDivisor)){
            return temporaryDivisor;
        }
    }
    return "";
}

std::string Solution::test(std::string str1, std::string str2){
    return solve(str1,str2);
}