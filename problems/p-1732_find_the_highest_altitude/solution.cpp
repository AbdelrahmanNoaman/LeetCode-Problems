#include <algorithm>
#include "solution.h"

int Solution::solve(std::vector<int> nums){
    int maxVal = 0,currVal = 0;
    for(int i=0;i<nums.size();i++){
        currVal+=nums[i];
        maxVal=std::max(currVal,maxVal);
    }
    return maxVal;
}

int Solution::test(std::vector<int> nums){
    return solve(nums);
}