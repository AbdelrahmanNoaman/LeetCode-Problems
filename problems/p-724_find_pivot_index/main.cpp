#include<iostream>
#include "solution.h"

int main(){
    Solution FindPivotIndex;
    std::vector<int> nums = {0,1,1,1,0,1,1,0,1};
    std::cout<< FindPivotIndex.test(nums);
    return 0;
}