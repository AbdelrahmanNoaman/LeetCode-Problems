#include "solution.h"
#include <string>

char Solution::solve(int k){
    std::string s = "a";

    while(s.size() < k){
        std::string manipulatedString = s;

        for(int i=0;i<manipulatedString.size();i++){
            char newChar = manipulatedString[i] == 'z' ? 'a' : manipulatedString[i]+1 ;
            manipulatedString[i] = newChar;
        }
        s+=manipulatedString;
    }

    return s[k-1];

}

char Solution::test(int k){
    return solve(k);
}