#include <algorithm>
#include "solution.h"

std::vector<bool> Solution::solve(std::vector<int> candies, int extraCandies){
    int maxVal = candies[0];

    for(int i=0;i<candies.size();i++){
        maxVal = std::max(maxVal,candies[i]);
    }

    int threshold = maxVal - extraCandies;

    std::vector<bool>result;
    for(int i=0;i<candies.size();i++){
        if(candies[i] >= threshold){
            result.push_back(true);
        }else{
            result.push_back(false);
        }
    }

    return result;
}

std::vector<bool> Solution::test(std::vector<int> candies, int extraCandies){
    return solve(candies,extraCandies);
}