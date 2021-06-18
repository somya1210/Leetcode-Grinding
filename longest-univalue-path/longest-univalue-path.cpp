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
        if(root)
        {int l,r;
            if(root->left)
             l=find(root->left,ans);
            else
                l=0;
            if(root->right)
                r=find(root->right,ans);
            else
                r=0;
           if(root->left&&root->left->val==root->val)
               l++;
           else
               l=0;
         
           if(root->right&&root->right->val==root->val)
               r++;
           else
               r=0;
               
           ans=max(ans,l+r);
           return max(l,r);
                
        }
        return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans=0;
     find(root,ans);
        return ans;
    }
};