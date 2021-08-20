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
    TreeNode* lca(TreeNode* root,int h,int &height)
    {
        if(!root)
            return root;
        if(h==height-1)
            return root;
        TreeNode* left=lca(root->left,h+1,height);
        TreeNode* right=lca(root->right,h+1,height);
        if(left&&right)
            return root;
        if(left)
            return left;
        return right;
    }
    int findh(TreeNode* root)
    {
        if(!root)
            return 0;
        int left=findh(root->left);
        int right=findh(root->right);
        return 1+max(left,right);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
     int height=findh(root);
        int h=0;
      return lca(root,h,height);
    }
};