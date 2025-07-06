#include <iostream>
#include "solution.h"

int main(){
    Solution NumberOfRecentCalls;
    std::cout << NumberOfRecentCalls.ping(1)<<std::endl;
    std::cout << NumberOfRecentCalls.ping(100)<<std::endl;
    std::cout << NumberOfRecentCalls.ping(3001)<<std::endl;
    std::cout << NumberOfRecentCalls.ping(3002)<<std::endl;
    std::cout << NumberOfRecentCalls.ping(20000)<<std::endl;

    return 0;
}