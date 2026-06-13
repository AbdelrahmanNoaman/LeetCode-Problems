#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include "solution.h"

int Solution::solve(std::vector<int>& nums, int target){
    std::sort(nums.begin(), nums.end());
    int result = 0;
    int minDiff = INT_MAX;
    for(int i = 0; i < nums.size(); i++){
        int left = i + 1, right = nums.size() - 1;
        while(left < right){
            int currentSum = nums[i] + nums[left] + nums[right];
            if(std::abs(currentSum - target) < minDiff){
                minDiff = std::abs(currentSum - target);
                result = currentSum;
            }

            if(currentSum < target){
                left++;
            }else if(currentSum > target){
                right--;
            }else{
                return currentSum;
            }
        }
    }
    return result;
}

int Solution::test(std::vector<int>& nums, int target){
    return solve(nums, target);
}