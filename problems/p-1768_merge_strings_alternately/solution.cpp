#include <algorithm>
#include "solution.h"


std::string Solution::solve(std::string word1, std::string word2){
    std::string result = "";
    int firstWordIterator = 0,secondWordIterator=0;
    while(firstWordIterator < word1.size() || secondWordIterator < word2.size()){
        if(firstWordIterator < word1.size()){
            result+=word1[firstWordIterator];
            firstWordIterator++;
        }
        if(secondWordIterator < word2.size()){
            result+=word2[secondWordIterator];
            secondWordIterator++;
        }
    }
    return result;
}

std::string Solution::test(std::string word1, std::string word2){
    return solve(word1,word2);
}