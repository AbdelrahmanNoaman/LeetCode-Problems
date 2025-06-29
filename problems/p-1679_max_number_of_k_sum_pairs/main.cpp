#include<iostream>
#include "solution.h"

int main(){
    Solution MaxNumberOfKSumPairs;
    std::vector<int> nums = {29,26,81,70,75,4,48,38,22,10,51,62,17,50,7,7,24,61,54,44,30,29,66,83,6,45,24,49,42,31,10,6,88,48,34,10,54,56,80,41,19};
    int k = 12;
    std::cout<< MaxNumberOfKSumPairs.test(nums,k);
    return 0;
}