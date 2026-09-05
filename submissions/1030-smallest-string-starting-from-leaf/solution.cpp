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
    string smallestFromLeaf(TreeNode* root) {
        return dfs(root, "");
    }

    string dfs(TreeNode* root, string s) {
        if(root==NULL)
            return "{";
        s+=(root->val+'a');
        if (root->left==NULL&&root->right==NULL) {
            reverse(s.begin(),s.end());
            return s;
        }
        return min(dfs(root->left,s),dfs(root->right, s));
    }
};
