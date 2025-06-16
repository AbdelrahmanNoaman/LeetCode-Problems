#include "p2016.h";
#include <algorithm>

p2016::p2016() {}

 int p2016::solve(std::vector<int>& nums) {
        int maxDiff = -1;
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

int p2016::test(std::vector<int>& nums) {
    return this->solve(nums);
}
