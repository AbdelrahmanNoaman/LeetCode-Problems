#include <algorithm>
#include <map>
#include "solution.h"


int Solution::solve(std::vector<std::vector<int>>nums){
    int result = 0;
    std::map<std::vector<int>,int> vectors;
    for(int i=0;i<nums.size();i++){
        vectors[nums[i]]++;
    }

    for(int i=0;i<nums.size();i++){

        std::vector<int>currentCol;
        for(int j=0;j<nums.size();j++){
            currentCol.push_back(nums[j][i]);
        }
        result += vectors[currentCol];
    }
    return result;
}

int Solution::test(std::vector<std::vector<int>> nums){
    return solve(nums);
}