#include <vector>
#include <unordered_map>
#include "solution.h"

std::vector<int> Solution::solve(std::vector<int>& nums, int target){
    std::unordered_map<int,int> vals;
    for(int i=0; i<nums.size(); i++){
        if(vals[target-nums[i]] != 0){
            return {i, vals[target-nums[i]]-1};
        }else{
            vals[nums[i]] = i+1;
        }
    }
    return {0,0};
}

std::vector<int> Solution::test(std::vector<int>& nums, int target){
    return solve(nums, target);
}