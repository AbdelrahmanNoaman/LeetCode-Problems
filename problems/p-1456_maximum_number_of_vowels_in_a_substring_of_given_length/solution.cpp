#include "solution.h"
#include <cmath>

bool Solution::isVowel(char ch){
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o' || ch=='u') return true;
    return false;
}

int Solution::solve(std::string s,int k){
    int left = 0, right = k-1;
    int maxOccOfVowels = 0;
    int currentOccOfVowels = 0;
    for(int i=left;i<=right;i++){
        if(isVowel(s[i])){
            maxOccOfVowels=std::max(maxOccOfVowels,++currentOccOfVowels);
        }
    }
    while(right < s.size()-1){
        if(isVowel(s[left++])){
            currentOccOfVowels--;
        }
        if(isVowel(s[++right])){
            maxOccOfVowels=std::max(maxOccOfVowels,++currentOccOfVowels);
        }
    }

    return maxOccOfVowels;
}

int Solution::test(std::string s,int k){
    return solve(s,k);
}