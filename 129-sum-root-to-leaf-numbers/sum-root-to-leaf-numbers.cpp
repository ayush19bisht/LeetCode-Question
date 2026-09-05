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
    int res = 0;
    void helper(TreeNode*root , int ans){
        if(root == NULL) return ; 
        ans = ans*10 + root->val;
        if(root->left == NULL && root->right == NULL){
           res+=ans;
           return;
        }
        helper(root->left , ans);
        helper(root->right , ans);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        helper(root , ans);
        return res;
    }
};