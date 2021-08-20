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
    int diff=0;
    pair<int,int> find(TreeNode* root)
    {
        if(!root)
            return {INT_MAX,INT_MIN};
        if(root->left==NULL&&root->right==NULL)
            return {root->val,root->val};
        pair<int,int>left=find(root->left);
        pair<int,int>right=find(root->right);
        int mn=min(left.first,right.first);
        int mx=max(left.second,right.second);
        diff=max(diff,abs(root->val-mn));
        diff=max(diff,abs(root->val-mx));
        mn=min(mn,root->val);
        mx=max(mx,root->val);
        return {mn,mx};
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        find(root);
        return diff;
        
    }
};