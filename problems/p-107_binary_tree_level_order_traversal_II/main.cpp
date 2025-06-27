#include<iostream>
#include<vector>
#include "solution.h"

int main(){
    Solution binaryTreeLevelOrderTraversal;
    std::vector<int>values = {3,9,20,-1,-1,15,7};
    std::vector<std::vector<int>> result = binaryTreeLevelOrderTraversal.test(values);
    for (const auto& level : result) {
        for (int val : level) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}