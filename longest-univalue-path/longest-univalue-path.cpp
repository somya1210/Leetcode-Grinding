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
        int l,r;
        l=find(root->left,ans);
        r=find(root->right,ans);
           
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
        // l ko zero karna and r ko zero karna ek essential step h kyunki kisi bhi node p hokar 
        // agar uska left ya right uske equal hi nhi h to kya matalb h find karne ka 
        // and in case if the root value is equal to both of its left and right child we will update //l and r value so that at the end we obtain the max value
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans=0;
     find(root,ans);
        return ans;
    }
};
