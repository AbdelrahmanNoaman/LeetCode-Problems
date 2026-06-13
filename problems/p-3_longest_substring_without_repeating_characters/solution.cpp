#include <string>
#include <unordered_set>
#include <algorithm>
#include "solution.h"

int Solution::solve(std::string s){
    std::unordered_set<char> dup;
    int left=0, right=0;
    int result = 0;
    while(left < s.size()){
        if(dup.contains(s[right])){
            dup.erase(s[left++]);
        }else{
            dup.insert(s[right]);
            int currentSize = dup.size();
            result = std::max(result, currentSize);
            if(right+1 < s.size()){
                right++;
            }else{
                break;
            }
        }
    }
    return result;
}

int Solution::test(std::string s){
    return solve(s);
}