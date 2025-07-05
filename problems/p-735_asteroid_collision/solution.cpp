#include <algorithm>
#include "solution.h"

std::vector<int> Solution::solve(std::vector<int> nums){
    std::vector<int>result;
    for(int i=0;i<nums.size();i++){
        if(result.size() > 0 && ((result[result.size()-1] > 0 && nums[i] < 0))){
            bool addNewElement = true;
            while(result.size() > 0 && result[result.size()-1] > 0){
                int top = result[result.size()-1];
                if(std::abs(top) < std::abs(nums[i])){
                    result.pop_back();
                }else{
                    if(std::abs(top) == std::abs(nums[i])){
                        result.pop_back();
                    }
                    addNewElement = false;
                    break;
                }
            }
            if(addNewElement) {
                result.push_back(nums[i]);
            }
        }else{
            result.push_back(nums[i]);
        }
    }
    return result;
}

std::vector<int> Solution::test(std::vector<int> nums){
    return solve(nums);
}