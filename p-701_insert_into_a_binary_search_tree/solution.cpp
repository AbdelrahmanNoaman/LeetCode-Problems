#include "solution.h"
#include <queue>


TreeNode* Solution::solve(TreeNode*root,int val){
    TreeNode*iterator = root;
    TreeNode*newNode = new TreeNode(val);
    while(iterator){
        if(val > iterator->val){
            if(!iterator->right){
                iterator->right = newNode;
                return root;
            }
            iterator = iterator->right;
        }else{
            if(!iterator->left){
                iterator->left = newNode;
                return root;
            }
            iterator = iterator->left;
        }
    }
    return newNode;
}

std::vector<int> Solution::test(std::vector<int>nums,int val){
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

    TreeNode* result = this->solve(root, val);

    std::vector<int> resVec;
    std::queue<TreeNode*> q2;
    q2.push(result);
    while (!q2.empty()) {
        TreeNode* node = q2.front();
        q2.pop();
        if (node) {
            resVec.push_back(node->val);
            q2.push(node->left);
            q2.push(node->right);
        } else {
            resVec.push_back(-1);
        }
    }
    
    while (!resVec.empty() && resVec.back() == -1) {
        resVec.pop_back();
    }
    return resVec;

}