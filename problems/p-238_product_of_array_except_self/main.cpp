#include <iostream>
#include "solution.h"

int main(){
    Solution ProductOfArrayExceptSelf;
    std::vector<int>nums = {1,2,3,4};
    std::vector<int>result = ProductOfArrayExceptSelf.test(nums);
    for(int i=0;i<result.size();i++){
        std::cout<<result[i] << " ";
    }
    return 0;
}