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
    void helper(TreeNode* root, vector<vector<int>>& ans , vector<int> curr , int& targetSum , int sum){
        if(root == NULL) return;
        
        sum += root->val;
        curr.push_back(root->val);
        if(root->left == NULL && root->right == NULL && sum == targetSum){
            ans.push_back(curr);
        }
        helper(root->left , ans ,curr , targetSum , sum);
        helper(root->right , ans , curr , targetSum , sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        vector<vector<int>> ans;
        vector<int> curr;
        helper(root , ans , curr , targetSum , sum);
        return ans;
    }
};