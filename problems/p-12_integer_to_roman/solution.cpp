#include <string>
#include <vector>
#include <unordered_map>
#include "solution.h"

std::string Solution::solve(int num){
    std::unordered_map<std::string, int> vals;
    vals["I"] = 1;
    vals["IV"] = 4;
    vals["V"] = 5;
    vals["IX"] = 9;
    vals["X"] = 10;
    vals["XL"] = 40;
    vals["L"] = 50;
    vals["XC"] = 90;
    vals["C"] = 100;
    vals["CD"] = 400;
    vals["D"] = 500;
    vals["CM"] = 900;
    vals["M"] = 1000;

    std::vector<std::string> letters = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::string res = "";
    int idx = 0;
    while(num){
        if(num >= vals[letters[idx]]){
            res += letters[idx];
            num -= vals[letters[idx]];
        }else{
            idx++;
        }
    }
    return res;
}

std::string Solution::test(int num){
    return solve(num);
}