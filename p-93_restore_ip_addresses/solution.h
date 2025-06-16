#include<vector>
#include<string>
#include "solving-method.h"

#ifndef SOLUTION
#define SOLUTION

class Solution {
private:
	bool isValidIpElement(std::string s);
	void solveRecursivelyHelper(std::string s, std::vector<std::string>& result, std::vector<std::string>currentIpElements, int startPosition);
	std::vector<std::string> solveRecursively(std::string s);
	std::vector<std::string> solveIteratevly(std::string s);
public:
	Solution();
	std::vector<std::string> test(std::string s,SolvingMethod method);
};

#endif // !SOLUTION