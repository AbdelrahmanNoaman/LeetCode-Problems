#include "Solution.h"
#include <algorithm>

Solution::Solution() {};

double Solution::solve(std::vector<int>& nums,int k) {
    double sum = 0;
    double maxAvg = INT_MIN;

    for(int i=0;i<nums.size()-k+1;i++){
        if(i==0){
            int j = 0;
            while(j<k){
                sum+=nums[j];
                j++;
            }
        }else{
            sum += nums[i+k-1];
        }
        maxAvg = std::max(sum / k , maxAvg);
        sum-= nums[i];
    }
    return maxAvg; 
}

double Solution::test(std::vector<int>& nums,int k) {
    return this->solve(nums,k);
}
