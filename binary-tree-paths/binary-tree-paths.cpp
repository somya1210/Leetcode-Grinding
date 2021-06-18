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
    void find(TreeNode* root,vector<string>&ans,string curr)
    {
        if(!root)
            return;
        
        if(root->left==nullptr&&root->right==nullptr)
        {
            curr=curr+to_string(root->val);
            ans.push_back(curr); return;
        }
        curr=curr+to_string(root->val);
        curr+="->";
        find(root->left,ans,curr);
        find(root->right,ans,curr);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        find(root,ans,s);
        return ans;
    }
};