#include <string>

#ifndef SOLUTION_5
#define SOLUTION_5

class Solution{

    private:
        bool isPalindrome(std::string s);
        std::string getLongestPalindrome(std::string s, int left, int right);
        std::string solve(std::string s);
    public:
        std::string test(std::string s);

};

#endif SOLUTION_5