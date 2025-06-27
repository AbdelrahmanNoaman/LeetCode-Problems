#include "solution.h"
#include <cmath>
#include <iostream>

int Solution::convertFromBinaryStringToDecimal(std::string s){
    int res = 0;
    for(int i=s.size()-1;i>=0;i--){
        int currentPower = s.size() - 1 - i;
        res += std::pow(2,currentPower) * (s[i] - '0');
    }
    return res;
}


void Solution::getAllPossibleCombinations (int startIdx,std::string currentString,int remainingNumberOfOnes){
    if(remainingNumberOfOnes==0){
        this->allPossibleCombinationsOfBinaryDigits.push_back(currentString);
        return;
    }
    if(startIdx > currentString.size()){
        return;
    }
    for(int i=startIdx;i<currentString.size();i++){
        std::string newString = currentString;
        newString[i] = '1';
        getAllPossibleCombinations(i+1,newString,remainingNumberOfOnes-1);
    }
};


std::vector<int> Solution::generatePossibleBinaryValues(int numberOfOnes,int numberOfBits){
    std::string s = "";
    for(int i=0;i<numberOfBits;i++){
        s+='0';
    }
    getAllPossibleCombinations(0,s,numberOfOnes);
    std::vector<int>result;
    for(int i=0;i<allPossibleCombinationsOfBinaryDigits.size();i++){
        result.push_back(convertFromBinaryStringToDecimal(allPossibleCombinationsOfBinaryDigits[i]));
    }
    allPossibleCombinationsOfBinaryDigits.clear();
    return result;
}

std::vector<std::string> Solution::solve(int turnedOn){
    int i=0;
    std::vector<std::string>result;

    while(i<=turnedOn){
        int numberOfOnesForHour = turnedOn - i;
        int numberOfOnesForMins = turnedOn - numberOfOnesForHour;

        std::vector<int>hourValues = generatePossibleBinaryValues(numberOfOnesForHour,4);
        std::vector<int>minsValues = generatePossibleBinaryValues(numberOfOnesForMins,7);
        for(int k=0;k<hourValues.size();k++){
            if(hourValues[k] > 12)continue;
            std::string hourValBase = hourValues[k] < 10 ? "0": "";
            std::string hourVal = hourValBase + std::to_string(hourValues[k]);
            for(int j=0;j<minsValues.size();j++){
                if(minsValues[j] > 59)continue;
                std::string minValBase = minsValues[j] < 10 ? "0": "";
                std::string minVal = minValBase + std::to_string(minsValues[j]);

                result.push_back(hourVal + ':' + minVal);
            }
        }
        i++;
    }
    return result;
}


std::vector<std::string> Solution::test(int turnedOn){
    return solve(turnedOn);
}