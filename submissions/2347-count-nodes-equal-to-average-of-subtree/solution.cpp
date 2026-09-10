class Solution {
public:
    int count=0;
    int isEqual(TreeNode* root,int &nodes)
    {
        if(root==NULL)
        {
            nodes=0;
            return 0;
        }
        int leftNodes,rightNodes;
        int leftSum=isEqual(root->left,leftNodes);
        int rightSum=isEqual(root->right,rightNodes);
        nodes=leftNodes+rightNodes+1;
        int sum=leftSum+rightSum+root->val;
        if(sum/nodes==root->val)
            count++;
        return sum;
    }
    int averageOfSubtree(TreeNode* root)
    {
        int nodes;
        isEqual(root,nodes);
        return count;
    }
};
