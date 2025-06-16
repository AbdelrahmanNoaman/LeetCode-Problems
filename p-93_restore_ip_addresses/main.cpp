#include<iostream>
#include "solution.h"
#include "solving-method.h"

int main() {
	Solution restoreIpAddresses;
	std::cout << "SOLVING ITERATIVELY..." << std::endl;
	std::vector<std::string> result = restoreIpAddresses.test("2251641168",SolvingMethod::ITERATEVILY);
	std::cout << "SOLVING RECURSIVELY..." << std::endl;
	result = restoreIpAddresses.test("2251641168", SolvingMethod::RECURSIVELY);

	return 0;
}