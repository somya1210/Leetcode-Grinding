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
    void find(TreeNode* root,vector<string>&ans,string s)
    {
        if(!root)
            return ;
        if(root->left==nullptr&&root->right==nullptr)
        {    s+=to_string(root->val);
            ans.push_back(s);
         return;
        }
        s+=to_string(root->val);
        s+="->";
        find(root->left,ans,s);
        find(root->right,ans,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        find(root,ans,s);
        return ans;
    }
};