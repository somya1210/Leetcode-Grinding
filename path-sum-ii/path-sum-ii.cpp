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
    void find(TreeNode* root,int targetSum,vector<int>inter,vector<vector<int>>&ans)
    {
     if(!root)
         return;
     
    if(root->left==root->right&&targetSum==root->val)
    {
        inter.push_back(root->val);
        ans.push_back(inter);
        return;
    }   inter.push_back(root->val);
        find(root->left,targetSum-root->val,inter,ans);
        find(root->right,targetSum-root->val,inter,ans);
        //inter.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     vector<vector<int>>ans;
     vector<int>inter;
        find(root,targetSum,inter,ans);
        return ans;
    }
};