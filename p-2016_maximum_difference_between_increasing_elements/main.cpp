#include <iostream>
#include <vector>
#include "solution.h"

int main() {
	Solution getMaximumDifferenceBetweenIncreasingElements;
	std::vector<int>values = { 1,5,3,2,4,8,6,10,2,9 };
	std::cout << getMaximumDifferenceBetweenIncreasingElements.test(values) << std::endl;

	return 0;
}