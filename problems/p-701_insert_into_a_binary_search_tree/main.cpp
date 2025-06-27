#include<iostream>
#include<vector>
#include "solution.h"

int main(){
    Solution InsertIntoABinarySearchTree;
    std::vector<int>values = {4,2,7,1,3};
    std::vector<int> result = InsertIntoABinarySearchTree.test(values,5);
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<" ";
    }
    return 0;
}