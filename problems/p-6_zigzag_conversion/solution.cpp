#include <string>
#include <vector>
#include <algorithm>
#include "solution.h"

std::string Solution::solve(std::string s, int numRows){
    std::vector<std::string> subStrings(numRows, "");

    bool increment = true;
    int stringIdx = 0;
    for (int i = 0; i < s.size(); i++) {
        if (increment) {
            subStrings[stringIdx++] += s[i];
            if (stringIdx == numRows) {
                increment = false;
                stringIdx = std::max(numRows - 2, 0);
            }
        }
        else {
            subStrings[stringIdx--] += s[i];
            if (stringIdx < 0) {
                increment = true;
                stringIdx = numRows > 1 ? 1 : 0;
            }
        }
    }
    std::string result = "";

    for (int i = 0; i < numRows; i++) {
        result += subStrings[i];
    }
    return result;
}

std::string Solution::test(std::string s, int numRows){
    return solve(s, numRows);
}