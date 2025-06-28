#include "solution.h"
#include <iostream>
#include <algorithm>

bool Solution::solve(std::vector<int>nums){
    std::vector<int>rightMax(nums.size(),INT_MIN),leftMin(nums.size(),INT_MAX);
    int start = 1,end=nums.size()-2;

    while(end >=0){
        leftMin[start] = std::min(leftMin[start-1],nums[start]);
        rightMax[end] = std::max(rightMax[end+1],nums[end]);
        end--;
        start++;
    }

    for(int i=1;i<nums.size()-1;i++){
        if(nums[i] > leftMin[i] && nums[i] < rightMax[i]){
            return true;
        }
    }

    return false;
}

bool optimizedSol(std::vector<int>nums){
    int first=INT_MAX,second=INT_MAX;

    for(int i=00;i<nums.size();i++){
        if(nums[i] <= first){
            first = nums[i];
        } else if (nums[i] <=second){
            second = nums[i];
        }else{
            return true;
        }
    }
    return false;
}

bool Solution::test(std::vector<int>nums){
    return solve(nums);
}
