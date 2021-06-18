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
    { if(!root)
        return 0;
        // diameter can pass from the root or may not pass from the root
        int l=find(root->left,ans);//-1)
        int r=find(root->right,ans); //-2
        int temp=max(l,r)+1;
        int res=max(temp-1,l+r);
      ans=max(ans,res);
      return temp;
     
       
        
    
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
     find(root,ans);
        return ans;
    }
};