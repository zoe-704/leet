/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum = -100001, ans = 0, level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            level++;
            int cur_sum = 0;
            for (int i = q.size(); i > 0; i--) {
                TreeNode* cur_node = q.front();
                q.pop();
                cur_sum += cur_node->val;
                if (cur_node->left != nullptr) q.push(cur_node->left);
                if (cur_node->right != nullptr) q.push(cur_node->right);
            }
            if (maxSum < cur_sum) {
                maxSum = cur_sum;
                ans = level;
            }
        }
        return ans;
    }
};