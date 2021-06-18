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
    void find(TreeNode* root,int &ans,int p)
    {
        if(!root)
            return;
        p=p*10+root->val;
        if(root->left==nullptr&&root->right==nullptr)
        {
            ans+=p;
            return;
        }
        find(root->left,ans,p);
        find(root->right,ans,p);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        int p=0;
        find(root,ans,p);
        return ans;
    }
};