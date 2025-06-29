#include "solution.h"

void Solution::solve(std::vector<int>&nums){
    std::vector<int>notZerosValues;
    for(int i=0;i<nums.size();i++){
        
        if(nums[i]!=0){
            notZerosValues.push_back(nums[i]);
        }
    }

    for(int i=0;i<notZerosValues.size();i++){
        nums[i]=notZerosValues[i];
    }

    for(int i=notZerosValues.size();i<nums.size();i++){
        nums[i]=0;
    }
}

void Solution::test(std::vector<int>&nums){
    return solve(nums);
}