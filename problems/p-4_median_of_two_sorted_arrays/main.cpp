#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2};
    
    Solution MedianProblem;
    double median = MedianProblem.test(nums1, nums2);
    
    std::cout << median;
    return 0;
}