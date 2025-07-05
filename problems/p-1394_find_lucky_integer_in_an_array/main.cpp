#include<iostream>
#include "solution.h"

int main(){
    Solution FindLuckyIntegerInAnArray;
    std::vector<int> nums = {2,2,3,4};
    std::cout<< FindLuckyIntegerInAnArray.test(nums);
    return 0;
}