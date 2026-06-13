#include <iostream>
#include <vector>
#include <string>
#include "solution.h"

std::vector<std::string> Solution::solve(std::string digits){
    std::vector<std::string> values = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
    std::vector<std::string> output;
    if (digits.size() > 0) {
        for (size_t i = 0; i < values[digits[0]-'0'].size(); i++) {
            char letterOne = values[digits[0] - '0'][i];
            if (digits.size() > 1) {
                for (size_t j = 0; j < values[digits[1] - '0'].size(); j++) {
                    char letterTwo = values[digits[1] - '0'][j];
                    if (digits.size() > 2) {
                        for (size_t k = 0; k < values[digits[2] - '0'].size(); k++) {
                            char letterThree = values[digits[2] - '0'][k];
                            if (digits.size() > 3) {
                                for (size_t q = 0; q < values[digits[3] - '0'].size(); q++) {
                                    char letterFour = values[digits[3] - '0'][q];
                                    std::string res = "";
                                    res += letterOne;
                                    res += letterTwo;
                                    res += letterThree;
                                    res += letterFour;
                                    output.push_back(res);
                                }
                            }
                            else {
                                std::string res = "";
                                res += letterOne;
                                res += letterTwo;
                                res += letterThree;
                                output.push_back(res);
                            }
                        }
                    }
                    else {
                        std::string res = "";
                        res += letterOne;
                        res += letterTwo;
                        output.push_back(res);
                    }
                }
            }
            else {
                std::string res = "";
                res += letterOne;
                output.push_back(res);
            }
        }
    }
    return output;
}

void Solution::test(std::string digits){
    std::vector<std::string> result = solve(digits);
    
    std::cout << "[";
    for(size_t i = 0; i < result.size(); ++i) {
        std::cout << "\"" << result[i] << "\"";
        if(i < result.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}