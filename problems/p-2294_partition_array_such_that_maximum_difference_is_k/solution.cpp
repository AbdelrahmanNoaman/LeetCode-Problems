#include "solution.h"
#include <algorithm>
#include <iostream>
#include <string>

int Solution::solve(std::vector<int>nums,int k){
    sort(nums.begin(), nums.end());
    int result = 0,currentMin = nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]-currentMin > k){
            result++;
            currentMin = nums[i];
        }
    }
    result++;
    return result;
}

int Solution::test(std::vector<int>nums,int k){
    return solve(nums,k);
}