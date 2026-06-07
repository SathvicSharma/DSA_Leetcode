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
    queue<TreeNode*>q;
    vector<vector<int>>ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root);
        return ans;
    }

    void bfs(TreeNode* root)
    {
        if(root==NULL)
            return;
        q.push(root);
        while(!q.empty())
        {
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* n=q.front();
                q.pop();
                level.push_back(n->val);
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            ans.push_back(level);
        }
    }
};
