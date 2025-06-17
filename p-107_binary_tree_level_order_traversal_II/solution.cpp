#include "solution.h"
#include<vector>
#include<queue>

std::vector<std::vector<int>> Solution::solve(TreeNode* root) {
	if (!root) return {};

	std::queue<TreeNode*>q;
	q.push(root);
	std::vector<std::vector<int>>reversedResult;

	while (!q.empty()) {
		int levelSize = q.size();
		std::vector<int>levelResult;

		for (int i = 0; i < levelSize; i++) {
			TreeNode* currentNode = q.front();
			levelResult.push_back(currentNode->val);
			q.pop();

			if (currentNode->left) {
				q.push(currentNode->left);
			}
			if (currentNode->right) {
				q.push(currentNode->right);
			}
		}
		reversedResult.push_back(levelResult);
	}
	std::vector<std::vector<int>>result;
	for (int i = 0; i < reversedResult.size(); i++) {
		result.push_back(reversedResult[reversedResult.size() - 1 - i]);
	}
	return result;
}

std::vector<std::vector<int>> Solution::test(std::vector<int>& nums) {
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