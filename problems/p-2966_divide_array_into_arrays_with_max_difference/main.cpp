#include <iostream>
#include <vector>

#include "solution.h"

int main(){
    std::vector<std::vector<int>>testCases = {{1,3,4,8,7,9,3,5,1},{2,4,2,2,5,2},{4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11}};
    std::vector<int> kValues = {2,2,14};
    Solution DivideArrayIntoArraysWithMaxDifference;
    for (int i=0;i<int(testCases.size());i++){
        std::vector<int> values = testCases[i];
        int k = kValues[i];
        std::vector<std::vector<int>> result = DivideArrayIntoArraysWithMaxDifference.test(values, k);
        for (const auto& array : result) {
            for (int num : array) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "-----" << std::endl;
    }
    return 0;
}