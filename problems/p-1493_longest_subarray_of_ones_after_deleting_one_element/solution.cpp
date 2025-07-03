#include <algorithm>
#include "solution.h"

int Solution::solve(std::vector<int> nums){
        bool foundZero = false;
        int onesBeforeIt = 0,onesAfterIt=0;
        int result = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                result = std::max(result,onesBeforeIt+onesAfterIt);
                if(foundZero){
                    onesBeforeIt=onesAfterIt;
                    onesAfterIt=0;
                }
                foundZero = true;
            }else{
                if(foundZero){
                    onesAfterIt++;
                }else{
                    onesBeforeIt++;
                }
            }
        }
        if(!foundZero){
            return nums.size()-1;
        }
        result = std::max(result,onesBeforeIt+onesAfterIt);
        return result;
}

int Solution::test(std::vector<int> nums){
    return solve(nums);
}