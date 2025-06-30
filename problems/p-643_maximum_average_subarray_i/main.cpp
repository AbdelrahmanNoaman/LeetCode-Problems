#include <iostream>
#include <vector>
#include "solution.h"

int main() {
	Solution MaximumAverageSubarray;
	std::vector<int>values = { 1,12,-5,-6,50,3 };
	std::cout << MaximumAverageSubarray.test(values,4) << std::endl;

	return 0;
}