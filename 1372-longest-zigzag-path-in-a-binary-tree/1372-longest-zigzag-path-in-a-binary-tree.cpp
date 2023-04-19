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
    int maxi=0;
    int longestZigZag(TreeNode* root) {
        helper(root,false,0);
        helper(root,true,0);
        return maxi;
    }
    void helper(TreeNode* root,bool goLeft,int steps)
    {
        if(root==NULL)
            return;
        maxi=max(maxi,steps);
        if(goLeft==true)
        {
            helper(root->left,false,steps+1);
            helper(root->right,true,1);
        }
        else
        {
            helper(root->right,true,steps+1);
            helper(root->left,false,1);
        }
    }
};