#include <iostream>
#include "solution.h"

int main() {
	Solution DivideAStringIntoGroupsOfSizeK;
    std::vector<std::string>result = DivideAStringIntoGroupsOfSizeK.test("abcdefghi",3,'x');
	
    for(int i=0;i<result.size();i++){
        std::cout<< result[i] << " ";
    }

	return 0;
}