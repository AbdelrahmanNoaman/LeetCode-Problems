#include "solution.h"
#include <queue>

std::string Solution::solve(TreeNode*root){
    if(!root) return "";
    std::string result = "";

    result+= std::to_string(root->val);

    if(root->left || root->right){
        result+= '(';
        result += solve(root->left) ;
        result+= ')';
    }

    if(root->right){
        result+= '(';
        result += solve(root->right);
        result+= ')';
    }   

    return result;
}

std::string Solution::test(std::vector<int>nums){
    TreeNode* root = nullptr;
    if (!nums.empty()) {
        root = new TreeNode(nums[0]);
        std::queue<TreeNode*>q;
        q.push(root);
        int i = 1;

        while (i < nums.size()) {
            TreeNode* currentNode = q.front();
            q.pop();

            if (i < nums.size() && nums[i] != -1) {
                currentNode->left = new TreeNode(nums[i]);
                q.push(currentNode->left);
            }
            i++;

            if (i < nums.size() && nums[i] != -1) {
                currentNode->right = new TreeNode(nums[i]);
                q.push(currentNode->right);
            }
            i++;
        }
    }

    return this->solve(root);
}