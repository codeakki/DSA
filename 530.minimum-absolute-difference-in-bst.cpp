/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
 */

// @lc code=start
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
     int min_diff=INT_MAX,val=-1;
    int getMinimumDifference(TreeNode* root) {
         if(root->left != NULL){
             getMinimumDifference(root->left);
         }
         if(val>=0){
             min_diff =min(min_diff,root->val-val);
         }
         val=root->val;
         if(root->right != NULL){
             getMinimumDifference(root->right);
         }
         return min_diff;
        
    }
};
// @lc code=end

