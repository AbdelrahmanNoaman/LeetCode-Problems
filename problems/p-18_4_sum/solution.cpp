#include <iostream>
#include <vector>
#include <algorithm>
#include "solution.h"

std::vector<std::vector<int>> Solution::solve(std::vector<int>& nums, int target){
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    for(int i = 0; i < nums.size(); i++){
        if(i != 0 && nums[i] == nums[i-1]) continue;
        for(int j = i + 1; j < nums.size(); j++){
            if(j != i + 1 && nums[j] == nums[j-1]) continue;
            int left = j + 1, right = nums.size() - 1;
            while(right > left){
                long long currentSum = nums[i];
                currentSum += nums[j];
                currentSum += nums[left];
                currentSum += nums[right];
                if(currentSum == target){
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while(left < nums.size() - 1 && nums[left] == nums[left+1]){
                        left++;
                    }
                    left++;
                    while(right >= 1 && nums[right] == nums[right-1]){
                        right--;
                    }
                    right--;
                }else if(currentSum < target){
                    left++;
                }else{
                    right--;
                }
            }
        }
    }
    return result;
}

void Solution::test(std::vector<int>& nums, int target){
    // Core structural processing isolated within the class instance context
    std::vector<std::vector<int>> result = solve(nums, target);
    
    // Post-processing: Handle string array framing layout internally
    std::cout << "[";
    for(size_t i = 0; i < result.size(); ++i) {
        std::cout << "[" << result[i][0] << ", " << result[i][1] << ", " 
                  << result[i][2] << ", " << result[i][3] << "]";
        if(i < result.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}