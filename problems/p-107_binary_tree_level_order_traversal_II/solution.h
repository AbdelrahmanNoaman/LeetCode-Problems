
#include<vector>

#ifndef SOLUTION_107
#define SOLUTION_107

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
     std::vector<std::vector<int>> solve(TreeNode* root);
    public:
     std::vector<std::vector<int>> test(std::vector<int>&values);
};

#endif // !SOLUTION_107