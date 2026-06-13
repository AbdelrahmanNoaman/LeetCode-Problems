#include <string>
#include <unordered_map>
#include "solution.h"

int Solution::solve(std::string s){
    int res = 0;
    std::unordered_map<char,int> vals;
    vals['I'] = 1;
    vals['V'] = 5;
    vals['X'] = 10;
    vals['L'] = 50;
    vals['C'] = 100;
    vals['D'] = 500;
    vals['M'] = 1000;
    
    int size = s.size();
    for(int i=0; i<size; i++){
        if(i < size-1 && vals[s[i+1]] > vals[s[i]]){
            res -= vals[s[i]];
        }else{
            res += vals[s[i]];
        }
    }
    return res;
}

int Solution::test(std::string s){
    return solve(s);
}