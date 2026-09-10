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
    int ans;
    pair<int,int> solve(TreeNode* root){
        if(!root) return {0,0};
        auto P1 = solve(root->left);
        auto P2 = solve(root->right);
        int s =  P1.first + P2.first + root->val;
        int c = P1.second + P2.second +1;
        int avg = s/c;
        if(avg == root->val) ans += 1;
        return {s,c};
    }
    int averageOfSubtree(TreeNode* root) {
        ans=0;
        solve(root);
        return ans;
    }
};