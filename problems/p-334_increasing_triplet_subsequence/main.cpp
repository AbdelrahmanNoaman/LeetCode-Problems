#include <iostream>
#include "solution.h"

int main(){
    Solution IncreasingTripletSubsequence;
    std::vector<int>nums = {1,2,3,4};
    std::cout<< IncreasingTripletSubsequence.test(nums);

    return 0;
}