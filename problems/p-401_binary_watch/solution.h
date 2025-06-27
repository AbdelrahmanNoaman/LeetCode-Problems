#include<string>
#include<vector>

#ifndef SOLUTION_401
#define SOLUTION_401

class Solution{

    private:
        std::vector<std::string> allPossibleCombinationsOfBinaryDigits;
        int convertFromBinaryStringToDecimal(std::string s);
        void getAllPossibleCombinations (int startIdx,std::string currentString,int remainingNumberOfOnes);
        std::vector<int> generatePossibleBinaryValues(int numberOfOnes,int numberOfBits);
        std::vector<std::string> solve(int turnedOn);
    public:
        std::vector<std::string> test(int turnedOn);

};

#endif SOLUTION_401