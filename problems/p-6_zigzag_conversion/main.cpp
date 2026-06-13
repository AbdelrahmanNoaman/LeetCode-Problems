#include <iostream>
#include <string>
#include "solution.h"

int main(){
    std::string s = "PAYPALISHIRING";
    int numRows = 3;
    
    Solution ZigzagProblem;
    std::string result = ZigzagProblem.test(s, numRows);
    
    std::cout << result;
    return 0;
}