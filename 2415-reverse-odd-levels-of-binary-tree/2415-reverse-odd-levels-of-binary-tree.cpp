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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL)
            return root;
        helper(root->left,root->right,1);
        return root;
    }
    void helper(TreeNode* lt,TreeNode* rt,int lvl)
    {
        if(lt==NULL)
            return;
        if(lvl%2==1)
        {
            int temp=lt->val;
            lt->val=rt->val;
            rt->val=temp;
        }
        helper(lt->left,rt->right,lvl+1);
        helper(lt->right,rt->left,lvl+1);
    }
};