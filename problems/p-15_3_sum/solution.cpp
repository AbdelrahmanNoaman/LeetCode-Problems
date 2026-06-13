#include <vector>
#include <algorithm>
#include "solution.h"

std::vector<std::vector<int>> Solution::solve(std::vector<int>& nums){
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;
        int left = i+1, right = nums.size()-1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0){
                result.push_back({nums[i], nums[left], nums[right]});
                while(left < right && nums[left] == nums[left+1]){
                    left++;
                }
                left++;
                
                while(right > left && nums[right] == nums[right-1]){
                    right--;
                }
                right--;
            }else if (sum > 0){
                right--;
            }else{
                left++;
            }
        }
    }
    return result;
}

std::vector<std::vector<int>> Solution::test(std::vector<int>& nums){
    return solve(nums);
}