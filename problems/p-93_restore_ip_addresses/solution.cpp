#include "Solution.h"
#include <algorithm>
#include<iostream>

Solution::Solution() {}

bool Solution::isValidIpElement(std::string s) {
	if (s.size() > 3)return false;
	if (s[0] == '0' && s.size() > 1) return false;

	int value = stoi(s);
	if (value > 255) return false;
	return true;
}

std::vector<std::string> Solution::solveIteratively(std::string s) {
	std::vector<std::string>result;

	for (int j = 1; j < s.size(); j++) {

		for (int k = j + 1; k < s.size(); k++) {

			for (int l = k + 1; l < s.size(); l++) {
				std::string firstSubstring = s.substr(0, j);
				std::string secondSubstring = s.substr(j, k - j);
				std::string thirdSubstring = s.substr(k, l - k);
				std::string forthSubstring = s.substr(l, s.size() - l);
				if (isValidIpElement(firstSubstring) && isValidIpElement(secondSubstring) && isValidIpElement(thirdSubstring) && isValidIpElement(forthSubstring)) {
					result.push_back(firstSubstring + '.' + secondSubstring + '.' + thirdSubstring + '.' + forthSubstring);
				}

			}
		}
	}

	return result;
}

void Solution::solveRecursivelyHelper(std::string s, std::vector<std::string>& correctValues, std::vector<std::string>currentValues, int startValue) {
	if (startValue > s.size()) return;
	if (currentValues.size() == 3) {
		currentValues.push_back(s.substr(startValue, s.size() - startValue));
		for (int i = 0; i < currentValues.size(); i++) {
			if (!isValidIpElement(currentValues[i])) {
				return;
			}
		}
		std::string validIpAddress = currentValues[0] + '.' + currentValues[1] + '.' + currentValues[2] + '.' + currentValues[3];
		correctValues.push_back(validIpAddress);
		return;
	}

	int lastPossibleElement = s.size() - startValue;
	for (int length = 1; length < std::min(lastPossibleElement, 4); length++) {
		std::string currentString = s.substr(startValue, length);
		currentValues.push_back(currentString);
		solveRecursivelyHelper(s, correctValues, currentValues, startValue + length);
		currentValues.pop_back();
	}
}

std::vector<std::string>Solution::solveRecursively(std::string s) {
	std::vector<std::string>result;
	std::vector<std::string>currentRes = {};
	solveRecursivelyHelper(s, result, currentRes, 0);
	return result;
}

std::vector<std::string>Solution::test(std::string s,SolvingMethod method) {
	std::vector<std::string>result;
	if (method == SolvingMethod::ITERATIVELY) {
		result = solveIteratively(s);
	}
	if (method == SolvingMethod::RECURSIVELY) {
		result = solveRecursively(s);
	}
	for (int i = 0; i < result.size(); i++) {
		std::cout<<result[i]<<std::endl;
	}
	return result;
}