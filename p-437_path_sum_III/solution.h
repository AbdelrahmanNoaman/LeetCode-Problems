#include<vector>

#ifndef SOLUTION_437
#define SOLUTION_437

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
    private:
        int result = 0;
        std::vector<long long> solveHelper(TreeNode*root,int target);
        int solve(TreeNode*root,int target);
    public:
        int test(std::vector<int>values,int target);
};


#endif //SOLUTION_437