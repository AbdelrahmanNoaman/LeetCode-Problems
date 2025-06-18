#include<iostream>
#include<vector>
#include "solution.h"

int main(){
    Solution ConstructStringFromBinaryTree;
    std::vector<std::vector<int>>values = {{1,2,3,4},{1,2,3,-1,4},};
    for(int i=0;i<int(values.size());i++){ 
        std::string result = ConstructStringFromBinaryTree.test(values[i]);
        std::cout<<result<<std::endl;
    }
    return 0;
}