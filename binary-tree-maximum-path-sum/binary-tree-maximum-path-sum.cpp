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
    int find(TreeNode* root,int &ans)
    {
        if(!root)
             return 0;
        int l_sum=find(root->left,ans);
        int r_sum=find(root->right,ans);
        int temp=max(max(l_sum,r_sum)+root->val,root->val); // pass nahi ho ra h us node s
        int res=max(temp,l_sum+r_sum+root->val);
        ans=max(max(ans,res),root->val);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        find(root,ans);
        return ans;
    }
};