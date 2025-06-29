#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<int>values = {2,1,5,3,12};
    Solution ContainerWithMostWater;
    int maxArea = ContainerWithMostWater.test(values);
    std::cout<<maxArea;
    return 0;
}