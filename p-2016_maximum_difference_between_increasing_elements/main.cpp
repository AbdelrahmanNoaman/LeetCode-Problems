#include <iostream>
#include <vector>
#include "solution.h"

int main() {
	Solution getMaximumDifferenceBetweenIncreasingElements;
	std::vector<int>values = { 5,4,3,2,1 };
	std::cout << getMaximumDifferenceBetweenIncreasingElements.test(values) << std::endl;

	return 0;
}