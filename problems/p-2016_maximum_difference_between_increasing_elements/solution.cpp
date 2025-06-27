#include "Solution.h"
#include <algorithm>

Solution::Solution() {};

 int Solution::solve(std::vector<int>& nums) {
        int maxDiff = 100;
        int maxNumberInRight = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] >= maxNumberInRight) {
                maxNumberInRight = nums[i];
            }
            else {
                int currentDifference = maxNumberInRight - nums[i];
                maxDiff = std::max(maxDiff,currentDifference);
            }
        }
        return maxDiff;
    }

int Solution::test(std::vector<int>& nums) {
    return this->solve(nums);
}
