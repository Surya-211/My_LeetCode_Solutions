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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        order(root1,v1);
        order(root2,v2);
        if(v1.size()!=v2.size())
            return false;
        int flag=1;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
    void order(TreeNode* root,vector<int>&v)
    {
        if(root->left==NULL&&root->right==NULL)
            v.push_back(root->val);
        else if(root->right==NULL)
            order(root->left,v);
        else if(root->left==NULL)
            order(root->right,v);
        else
        {
            order(root->left,v);
            order(root->right,v);
        }
    }
};