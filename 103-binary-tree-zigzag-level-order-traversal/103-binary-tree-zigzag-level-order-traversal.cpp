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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {    vector<vector<int>>ans;
        if(!root)
            return ans;
  
        bool lefttoright=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size(),no=n;
            int i=0;
            vector<int>temp(n);
            while(n--)
            {
                TreeNode* front=q.front();
                
                q.pop();
                int index=lefttoright==true?i:no-i-1;
                temp[index]=front->val;
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                i++;
            }
            lefttoright=!lefttoright;
            ans.push_back(temp);
        }
        return ans;
    }
};