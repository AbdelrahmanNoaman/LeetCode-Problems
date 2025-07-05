#include<iostream>
#include "solution.h"

int main(){
    Solution AsteroidCollision;
    std::vector<int> nums = {5,10,-5};
    std::vector<int> result = AsteroidCollision.test(nums);
    for(int i=0;i<result.size();i++){
        std::cout<< result[i] <<", ";
    }
    return 0;
}