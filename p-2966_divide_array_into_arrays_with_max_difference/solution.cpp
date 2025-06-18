#include "solution.h"
#include <algorithm>

std::vector<std::vector<int>> Solution::solve(std::vector<int>values,int k){
    std::vector<std::vector<int>>result;
    std::sort(values.begin(),values.end());
    int size = int(values.size());
    for(int i=0;i<size;i+=3){
        if(values[i+2]-values[i] > k){
            return {};
        }
        result.push_back({values[i],values[i+1],values[i+2]});
    }
    return result;
}


std::vector<std::vector<int>> Solution::test(std::vector<int>values,int k){
    return solve(values,k);
}