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
    int depth=0;
    int curr_depth=1;
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        depth=maxdepth(root);
        calc(root,curr_depth);
        return sum;
    }

    int maxdepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(maxdepth(root->left),maxdepth(root->right));
    }

    void calc(TreeNode* root,int curr_depth)
    {
        if(root==NULL)
            return;
        if(curr_depth==depth)
            sum+=root->val;
        calc(root->left,curr_depth+1);
        calc(root->right,curr_depth+1);
    }


};
