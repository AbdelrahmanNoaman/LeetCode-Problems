#include <algorithm>
#include "solution.h"

int Solution::solve(std::vector<int> height){
    int max = 0;
    int left=0,right=height.size()-1;

    while(left<right){
        int currentArea = std::min(height[right],height[left]) * (right-left);
        max = std::max(currentArea,max);

        if(height[left] < height[right]) left++;
        else right--;
    }
    return max;
}

int Solution::test(std::vector<int> height){
    return solve(height);
}