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
             return 0;  // base condition
        int l_sum=find(root->left,ans);  // hypothesis
        int r_sum=find(root->right,ans);
        int temp=max(max(l_sum,r_sum)+root->val,root->val); // induction -> not passing through that node , either the current node is max or the sum from its left or right child
        int res=max(temp,l_sum+r_sum+root->val);  // update the answer each time
        ans=max(ans,res);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        find(root,ans);
        return ans;
    }
    // This problem is just like to find diameter of a binary tree with the edge case that if the left and right child of any node return negative values than we have to return the root->value 
};
