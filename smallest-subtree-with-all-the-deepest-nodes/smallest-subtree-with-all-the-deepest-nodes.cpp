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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
          queue<TreeNode*> q;
        q.push(root);
        TreeNode *first, *last;
        while(!q.empty()) {
            first = q.front(); last = q.back();
            int sz = q.size();
            while(sz--) {
                TreeNode* node = q.front(); q.pop();
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
        }
        return lca(root, first, last);
    }
      TreeNode* lca(TreeNode *root, TreeNode *p, TreeNode *q) {
        if(!root || root == p || root == q) return root;
        TreeNode* left = lca(root -> left, p, q);
        TreeNode* right = lca(root -> right, p, q);
        return left ? right ? root : left : right;
    }
};