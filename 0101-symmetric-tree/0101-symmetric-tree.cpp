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
    bool solve(TreeNode* rootL, TreeNode* rootR){
        if(!rootL && !rootR ) return true;
        if(!rootL || !rootR ) return false;
        if(rootL->val != rootR->val) return false;
        return solve(rootL->left, rootR->right) && solve(rootL->right, rootR->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return solve(root->left , root->right);
    }
};