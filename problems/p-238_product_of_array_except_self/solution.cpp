#include "solution.h"
#include<iostream>

std::vector<int> Solution::solve(std::vector<int>nums){
    std::vector<int>result(nums.size(),1);
    int start=1,end=nums.size()-2;
    int rightMultiple = 1 , leftMultiple = 1;
    while(end >= 0){
        rightMultiple *= nums[end+1];
        leftMultiple *= nums[start-1];
        result[end] *= rightMultiple;
        result[start] *= leftMultiple;
        start++;
        end--;
    }

    return result;
}

std::vector<int> Solution::test(std::vector<int>nums){
    return solve(nums);
}
