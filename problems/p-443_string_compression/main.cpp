#include <iostream>
#include "solution.h"

int main(){
    Solution StringCompression;
    std::vector<char>chars = {'a','a','b','b','c','c','c'};
    std::cout << StringCompression.test(chars)<<"\n";
    for(int i=0;i<chars.size();i++){
        std::cout<<chars[i] << " ";
    }
    return 0;
}