#include <algorithm>
#include <stack>
#include "solution.h"


std::string Solution::solve(std::string s){
    std::string vowels = "aeuoiAEUOI";
    std::stack<char> vowelsStack;

    for(int i=0;i<s.size();i++){
        if(vowels.find(s[i]) != std::string::npos){
            vowelsStack.push(s[i]);
        }
    }

    for(int i=0;i<s.size();i++){
        if(vowels.find(s[i]) != std::string::npos){
            s[i] = vowelsStack.top();
            vowelsStack.pop();
        }
    }
    
    return s;
}

std::string Solution::twoPointersSol(std::string s){
    std::string vowels = "aeuoiAEUOI";
    int start=0,end=s.size()-1;

    while(start <= end){
        while(start < s.size() && vowels.find(s[start]) == std::string::npos){
            start++;
        }

        while(end >=0 &&vowels.find(s[end]) == std::string::npos){
            end--;
        }

        if(start <= end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
    return s;
}

std::string Solution::test(std::string s){
    return twoPointersSol(s);
}