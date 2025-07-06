#include<queue>

#ifndef SOLUTION_933
#define SOLUTION_933

class Solution {
private:
    const int RECENT_CALLS_THRESHOLD = 3000;
    std::queue<int> requests;
    int solve(int t);
public:
    Solution();

    int ping(int t);
};

#endif //SOLUTION_933