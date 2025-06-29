#include <algorithm>
#include <unordered_map>
#include "solution.h"


int Solution::solve(std::vector<int> nums, int k){
    std::unordered_map<int,int> numbersOccurrences;
    for(int i=0;i<nums.size();i++){
        numbersOccurrences[nums[i]]++;
    }
    int result = 0;

    for(int i=0;i<nums.size();i++){
        int currentNumber = nums[i] , numberOfOcc = numbersOccurrences[currentNumber] , neededNumber = k-currentNumber, neededNumberOccurrences = numbersOccurrences[neededNumber];
        if(currentNumber==neededNumber){
            int newOperations = numberOfOcc / 2;
            result += newOperations;
            numbersOccurrences[currentNumber] -= newOperations *2;
        }else{
            int newOperations = std::min(numberOfOcc,neededNumberOccurrences);
            result += newOperations;
            numbersOccurrences[currentNumber] -= newOperations;
            numbersOccurrences[neededNumber] -= newOperations;
        }
    }
    return result;
}

int optimizedSol(std::vector<int>nums,int k){
    std::sort(nums.begin(),nums.end());
    int result = 0;
    int right = 0,left=nums.size()-1;
    while(right < left){
        int currentSum = nums[right] + nums[left];

        if(currentSum > k){
            left--;
        } else if (currentSum < k){
            right++;
        }else{
            result++;
            right++;
            left--;
        }
    }
    return result;
}

int Solution::test(std::vector<int> nums, int k){
    return optimizedSol(nums,k);
}