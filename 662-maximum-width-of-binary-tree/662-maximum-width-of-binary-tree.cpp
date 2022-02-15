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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long int>>q;
        unsigned long long int ans=0;
        if(!root)
            return 0;
        q.push(make_pair(root,1));
        while(!q.empty())
        {
            int n=q.size();
            unsigned long long int ifirst=q.front().second,ilast=0,i=0;
            while(n--)
            {
                TreeNode* top=q.front().first;
                unsigned long long int index=q.front().second;
                q.pop();
                ilast=index;
                if(top->left)
                {
                    q.push(make_pair(top->left,2*index));
                }
                if(top->right)
                {
                    q.push(make_pair(top->right,2*index+1));
                }
                i++;
            }
            ans=max(ans,ilast-ifirst+1);
        }
        return ans;
    }
};