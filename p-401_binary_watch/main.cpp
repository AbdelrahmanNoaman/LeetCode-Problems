#include<iostream>
#include<vector>
#include "solution.h"

int main(){
    Solution BinaryWatch;
    for(int j=0;j<11;j++){
        std::vector<std::string>result =  BinaryWatch.test(j);
        for(int i=0;i<result.size();i++){
            std::cout << result[i] << " ||| ";
        }
        std::cout<<"\n------------------------------\n";
    }

    return 0;
}