#include <vector>
#include <gtest/gtest.h> // template matching context if needed, otherwise standard headers
#include "solution.h"

double Solution::solve(std::vector<int>& nums1, std::vector<int>& nums2){
    int total_size = nums1.size() + nums2.size();
    int start_position;
    if (total_size % 2 == 0) {
        start_position = total_size / 2 - 1;
    }
    else {
        start_position = total_size / 2;
    }
    double median = 0;
    int firstArrIdx = 0;
    int secondArrIdx = 0;
    for (int i = 0; i < total_size; i++) {
        if (i > start_position + 1) break;
        if (firstArrIdx < nums1.size() && (secondArrIdx == nums2.size() || nums1[firstArrIdx] < nums2[secondArrIdx])) {
            if (total_size % 2 != 0 && start_position == i) {
                return nums1[firstArrIdx];
            }
            if (total_size % 2 == 0 && (start_position == i || start_position + 1 == i)) {
                median += nums1[firstArrIdx];
            }
            firstArrIdx++;
        }
        else{
            if (total_size % 2 != 0 && start_position == i) {
                return nums2[secondArrIdx]; 
            }
            if (total_size % 2 == 0 && (start_position == i || start_position + 1 == i)) {
                median += nums2[secondArrIdx];
            }
            secondArrIdx++;
        }
    }
    return median / 2;
}

double Solution::test(std::vector<int>& nums1, std::vector<int>& nums2){
    return solve(nums1, nums2);
}