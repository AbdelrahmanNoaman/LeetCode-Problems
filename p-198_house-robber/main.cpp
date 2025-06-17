#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    std::vector<std::vector<int>>values = {{1 ,2,3,1},{2,7,9,3,1},{8,4,8,9}};
    Solution HouseRobber;
    for(int i=0;i<values.size();i++){
        int result = HouseRobber.test(values[i]);
        std::cout<<"The Result is -> "<<result<<std::endl;
    }
    return 0;
}