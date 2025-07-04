#include <algorithm>
#include <vector>
#include "solution.h"

bool Solution::solve(std::string word1, std::string word2){
    std::vector<int> word1Letters(26),word2Letters(26);
    if(word1.size()!=word2.size())return false;

    for(int i=0;i<word1.size();i++){
        word1Letters[word1[i]-'a']++;
        word2Letters[word2[i]-'a']++;
    }

    for(int i = 0;i<word1.size();i++){
        if(word1Letters[i]==0 && word2Letters[i] != 0) return false;
        if(word1Letters[i]!=0 && word2Letters[i] == 0) return false;
    }

    std::sort(word1Letters.begin(),word1Letters.end());
    std::sort(word2Letters.begin(),word2Letters.end());

    for(int i=0;i<word1Letters.size();i++){
        if(word1Letters[i]!=word2Letters[i])return false;
    }
    return true;
}

bool Solution::test(std::string word1, std::string word2){
    return solve(word1,word2);
}