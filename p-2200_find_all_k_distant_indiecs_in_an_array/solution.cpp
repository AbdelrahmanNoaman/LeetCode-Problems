#include "solution.h"
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include<iostream>



std::vector<int> Solution::solve(std::vector<int>&nums,int key,int k){
    std::unordered_set<int> resultSet;
    int size = nums.size();

    for(int i=0;i<size;i++){
        if(nums[i]==key){
            int minVal = std::max(0,i-k);
            int maxVal = std::min(size-1,i+k);
            
            for(int j= minVal ; j <= maxVal; j++){
                resultSet.insert(j);
            }
        }
    }

    std::vector<int>result;
    for(auto it:resultSet){
        result.push_back(it);
    }
    return result;

}


std::vector<int> Solution::test(std::vector<int>&nums,int key,int k){
    return solve(nums,key,k);
}



