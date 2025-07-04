#include <algorithm>
#include "solution.h"

int Solution::solve(std::vector<int> nums){
    const int size = nums.size();
    std::vector<int>leftSum(size),rightSum(size);
    int backwardIdx = size-2;

    for(int i=1;i<size;i++){
        leftSum[i] = leftSum[i-1] + nums[i-1];
        rightSum[backwardIdx] = rightSum[backwardIdx+1] + nums[backwardIdx+1];
        backwardIdx--;
    }

    for(int i=0;i<size;i++){
        if(rightSum[i]==leftSum[i]) return nums[i];
    }
    return -1;
}

int Solution::test(std::vector<int> nums){
    return solve(nums);
}