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
    vector<int>ans;
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return constructBST(0,ans.size()-1);

    }

    TreeNode* constructBST(int beg,int end)
    {
        if(beg>end)
            return NULL;       
        int mid=(beg+end)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        root->left=constructBST(beg,mid-1);
        root->right=constructBST(mid+1,end);
        return root;
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
};
