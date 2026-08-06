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
    int count=0;
    int max_val=INT_MIN;
    int countDominantNodes(TreeNode* root) {
        postorder(root);
        return count;
    }
    int postorder(TreeNode* root)
    {
        if(root==NULL)
            return INT_MIN;
        int leftVal=postorder(root->left);
        int rightVal=postorder(root->right);
        int max_val=max(root->val,max(leftVal,rightVal));
        if(max_val==root->val)
            count++;
        return max_val;
    }
};
