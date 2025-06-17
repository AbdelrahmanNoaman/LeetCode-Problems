#include <algorithm>
#include <iostream>

#include "solution.h"


int Solution::solve(std::vector<int>nums){
    std::vector<int> bestChoices(nums.size(), 0);
    int size = nums.size();
    if(size>1){
        bestChoices[size-1] = nums[size-1];
    }
    if(size>2){
        bestChoices[size-2] = std::max(nums[size-2],bestChoices[size-1]);
    }

    for(int i=nums.size()-3;i>=0;i--){
        bestChoices[i] = std::max(nums[i]+bestChoices[i+2],bestChoices[i+1]);
    }

    return bestChoices[0];
}

int Solution::test(std::vector<int>nums){
    return solve(nums);
}