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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        TreeNode* root=NULL;
        return helper(root,nums);
    }
    
    TreeNode* helper(TreeNode* root,vector<int>v)
    {
        if(v.size()==0)
            return NULL;
        if(v.size()==1)
        {
            TreeNode* n=new TreeNode(v[0]);
            root=n;
            return root;
        }
        
        int ind=-1;
        int maxi=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
                ind=i;
            }
        }
        TreeNode* n=new TreeNode(v[ind]);
        vector<int>a;
        vector<int>b;
        for(int i=0;i<v.size();i++)
        {
            if(i<ind)
                a.push_back(v[i]);
            if(i>ind)
                b.push_back(v[i]);
        }
        n->left=helper(n,a);
        n->right=helper(n,b);
        root=n;
        return root;
    }
};