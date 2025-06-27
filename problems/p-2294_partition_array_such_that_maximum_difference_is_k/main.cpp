#include<iostream>
#include "solution.h"

int main(){
    Solution PartitionArraySuchThatMaximumDifferenceIsK;
    std::vector<std::vector<int>> numbersTestCases = {{3,6,1,2,5},{1,2,3},{2,2,4,5}};
    std::vector<int> kTestCases={2,1,0};
    for(int i=0;i<numbersTestCases.size();i++){
        int result = PartitionArraySuchThatMaximumDifferenceIsK.test(numbersTestCases[i],kTestCases[i]);
        std::cout<<result<<"\n---------\n";
    }
    return 0;
}