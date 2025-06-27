#include<iostream>
#include "solution.h"

int main(){
    Solution KidsWithTheGreatestNumberOfCandies;
    std::vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    std::vector<bool> result = KidsWithTheGreatestNumberOfCandies.test(candies,extraCandies);
    for(int i=0;i<result.size();i++){
        std::cout<< result[i] <<", ";
    }
    return 0;
}