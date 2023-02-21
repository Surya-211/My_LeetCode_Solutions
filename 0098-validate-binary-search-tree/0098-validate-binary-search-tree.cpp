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
    int flag=1;
    long mini=LONG_MIN;
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL)
            return true;
        inorder(root);
        if(flag==1)
            return true;
        else
            return false;
        
    }
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        if(root->val>mini)
        {
            mini=root->val;
        }
        else
        {
            flag=0;
            return;
        }
        inorder(root->right);
    }
};