#include<iostream>
#include "solution.h"

int main(){
    Solution LongestSubarrayOfOnesAfterDeletingOneElement;
    std::vector<int> nums = {0,1,1,1,0,1,1,0,1};
    std::cout<< LongestSubarrayOfOnesAfterDeletingOneElement.test(nums);
    return 0;
}