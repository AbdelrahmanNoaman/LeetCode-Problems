#include<iostream>
#include "solution.h"

int main(){
    Solution FindTheHighestAltitude;
    std::vector<int> nums = {0,1,1,1,0,1,1,0,1};
    std::cout<< FindTheHighestAltitude.test(nums);
    return 0;
}