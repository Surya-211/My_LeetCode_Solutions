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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* newNode=new TreeNode(val);
            return newNode;
        }
        insert(root,val);
        return root;
    }
    void insert(TreeNode* root,int val)
    {
        if(root==NULL)
            return;
        if(val>root->val)
        {
            if(root->right==NULL)
            {
                TreeNode* newNode=new TreeNode(val);
                root->right=newNode;
                return;   
            }
            else
                insert(root->right,val);
        }
        else 
        {
            if(root->left==NULL)
            {
                TreeNode* newNode=new TreeNode(val);
                root->left=newNode;
                return;    
            }
            else
                insert(root->left,val);
            
        }
    }
};