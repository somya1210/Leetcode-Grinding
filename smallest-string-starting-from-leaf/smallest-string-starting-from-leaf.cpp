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
    void find(TreeNode* root,string &ans,string curr)
    {
        if(!root)
            return;
        curr.insert(curr.begin(),char(root->val+'a'));
        if(root->left==root->right)
        {
            if(ans.length()==0)
                ans=curr;
            else
                ans=min(ans,curr);
        }
        find(root->left,ans,curr);
        find(root->right,ans,curr);
       
       
        
    }
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        string p="";
      find(root,s,p);
        
   
        return s;
    }
};