#include <iostream>
#include "solution.h"

int main() {
	Solution FindAllKDistinctIndicesInAnArray;
    std::vector<int>inputVector = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int>result = FindAllKDistinctIndicesInAnArray.test(inputVector,2,5);
	
    for(int i=0;i<result.size();i++){
        std::cout<< result[i] << " ";
    }

	return 0;
}