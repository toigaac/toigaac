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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        them(root,ans);
        return ans[k-1];
    }
    void them(TreeNode* root,vector<int> &ans){
        if(root==nullptr) return;
        them(root->left,ans);
        ans.push_back(root->val);
        them(root->right,ans);
    }
};
