#include <iostream>
#include <vector>
#include "p2016.h"

int main() {
	p2016* getMaximumDifferenceBetweenIncreasingElements = new p2016();
	std::vector<int>values = { 1,5,3,2,4,8,6,10,2,9 };
	std::cout << getMaximumDifferenceBetweenIncreasingElements->test(values) << std::endl;

	return 0;
}