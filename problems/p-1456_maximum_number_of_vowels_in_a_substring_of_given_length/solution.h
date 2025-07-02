#include<string>

#ifndef SOLUTION_1456
#define SOLUTION_1456

class Solution{
    private:
        bool isVowel(char ch);
        int solve(std::string s,int k);
    public:
        int test(std::string s,int k);
};

#endif // SOLUTION_1456