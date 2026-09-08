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
   void dfs(TreeNode* root, long long sum, unordered_map<long long,int>& freq, int& count , int targetSum) {
    if(root == NULL) return;
    sum += root->val;
    
    count += freq[sum-targetSum];
    freq[sum]++;
    dfs(root->left , sum , freq , count , targetSum);
    dfs(root->right , sum , freq , count , targetSum);
    freq[sum]--;
}
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        unordered_map<long long,int>freq;
        freq[0] = 1;
        long long sum = 0;
        dfs(root , sum , freq , count , targetSum);
        
        return count;
    }
};