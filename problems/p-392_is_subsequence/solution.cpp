#include <algorithm>
#include "solution.h"

bool Solution::solve(std::string s,std::string t){
    int sIdx = 0;
    for(int i=0;i<t.size();i++){
        if(t[i]==s[sIdx]){
            sIdx++;
            if(sIdx == s.size()){
                return true;
            }
        }
    }
    return false;
}

bool Solution::test(std::string s,std::string t){
    return solve(s,t);
}