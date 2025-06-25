#include<vector>

#ifndef SOLUTION_701
#define SOLUTION_701

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
        TreeNode* solve(TreeNode*root,int val);
    public:
        std::vector<int> test(std::vector<int>values,int val);
};


#endif //SOLUTION_701