#include <algorithm>
#include <iostream>

#include "solution.h"


int Solution::solve(std::vector<int>nums){
    std::vector<int> bestChoices(nums.size(), 0);

    for(int i=nums.size()-1;i>=0;i--){
        if(i == nums.size()-1){
            bestChoices[i] = nums[i];
        }
        else if (i == nums.size()-2){
            bestChoices[i] = std::max(nums[i],bestChoices[i+1]);
        }
        else{
            bestChoices[i] = std::max(nums[i]+bestChoices[i+2],bestChoices[i+1]);
        }
    }

    return bestChoices[0];
}

int Solution::test(std::vector<int>nums){
    return solve(nums);
}