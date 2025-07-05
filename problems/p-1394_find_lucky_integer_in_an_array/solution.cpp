#include <algorithm>
#include <unordered_map>
#include "solution.h"

int Solution::solve(std::vector<int> arr){
        std::unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }

        int maxOcc = -1;
        for(auto it:freq){
            if(it.first == it.second){
                maxOcc =std:: max(maxOcc,it.first);
            }
        }
        return maxOcc;
}

int Solution::test(std::vector<int> nums){
    return solve(nums);
}