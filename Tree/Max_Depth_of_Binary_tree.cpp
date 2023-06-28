// Given a binary tree, find its maximum depth.
// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        if(root==NULL)return 0;
        else if(root->left&&!root->right)
        return 1+maxDepth(root->left);
        else if(root->right&&!root->left)
        return 1+maxDepth(root->right);
        else
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
//for min Depth
class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
       if(root==NULL)return 0;
       else if(root->left&&!root->right)
       return 1+minDepth(root->left);
       else if(!root->left&&root->right)
       return 1+minDepth(root->right);
       else
       return 1+min(minDepth(root->left),minDepth(root->right));
    }
};
