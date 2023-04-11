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
    
    vector<int>v;
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL)
            return root;
        inorder(root);
        int i=0;
        int j=v.size()-1;
        return build(i,j);
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* build(int i,int j)
    {
        if(i>j)
            return NULL;
        int mid=(i+j)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=build(i,mid-1);
        root->right=build(mid+1,j);
        return root;
    }
};