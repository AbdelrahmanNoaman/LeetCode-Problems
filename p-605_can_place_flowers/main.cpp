#include<iostream>
#include "solution.h"

int main(){
    Solution CanPlaceFlowers;
    std::vector<int> flowerbed = {0,0};
    int n = 2;
    std::cout<< CanPlaceFlowers.test(flowerbed,n);
    return 0;
}