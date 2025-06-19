#include "solution.h"
#include <queue>
#include<iostream>
#include<string>


std::vector<long long> Solution::solveHelper(TreeNode*root,int target){
    if(!root) return {};
    std::vector<long long>rightChildrenSums,leftChildrenSums;

    if(root->right){
        rightChildrenSums = solveHelper(root->right,target);
    }
    if(root->left){
        leftChildrenSums = solveHelper(root->left,target);
    }

    std::vector<long long>finalResult;
    finalResult.push_back((long long)root->val);


    for(int i=0;i<rightChildrenSums.size();i++){
        finalResult.push_back((long long)rightChildrenSums[i]+root->val);
    }

    for(int i=0;i<leftChildrenSums.size();i++){
        finalResult.push_back((long long)leftChildrenSums[i]+root->val);
    }

    for(int i=0;i<finalResult.size();i++){
        if(finalResult[i]==target){
            result++;
        }
    }

    return finalResult;
}

int Solution::solve(TreeNode*root,int target){
    solveHelper(root,target);
    return result;
}

int Solution::test(std::vector<int>nums,int target){
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

    return this->solve(root,target);
}