#include <string>
#include "solution.h"

bool Solution::isPalindrome(std::string s){
    int start=0;
    int end = s.size()-1;
    while(start<=end){
        if(s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

std::string Solution::getLongestPalindrome(std::string s, int left, int right){
    while(left >=0 && right < s.size()){
        if(s[left]!=s[right]) break;
        left--; right++;
    }
    return s.substr(left+1, right-left-1);
}

std::string Solution::solve(std::string s){
    std::string result = "";
    for(int i=0; i<s.size(); i++){
        std::string odd = getLongestPalindrome(s, i, i);
        std::string even = getLongestPalindrome(s, i, i+1);

        if(even.size() > odd.size() && even.size() > result.size()){
            result = even;
        }else if(odd.size() > result.size()){
            result = odd;
        }
    }
    return result;
}

std::string Solution::test(std::string s){
    return solve(s);
}