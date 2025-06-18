#include<string>
#include<vector>

#ifndef SOLUTION_606
#define SOLUTION_606

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
        std::string solve(TreeNode*root);
    public:
        std::string test(std::vector<int>values);
};


#endif // SOLUTION_606