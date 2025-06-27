#include<iostream>
#include<vector>
#include "solution.h"

int main(){
    Solution PathSumIII;
    std::vector<int>values = {10,5,-3,3,2,-1,11,3,-2,-1,1};
    int result = PathSumIII.test(values,8);
    std::cout<<result<<std::endl;
    return 0;
}