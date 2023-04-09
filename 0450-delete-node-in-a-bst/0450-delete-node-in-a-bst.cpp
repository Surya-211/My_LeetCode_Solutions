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
    TreeNode* rt;
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)
            return root;
        if(root->left==NULL&&root->right==NULL)
        {
            if(root->val==key)
                return NULL;
            else
                return root;
        }
         rt=root;
         helper(root,NULL,key);
         return rt;
    }
    
    void helper(TreeNode* root,TreeNode* parent,int key)
    {
        if(root==NULL)
            return;
        if(root->val==key)
        {
            TreeNode* l=root->left;
            TreeNode* r=root->right;
            TreeNode* temp=r;
            if(l==NULL&&r==NULL)
            {
                if(root==parent->right)
                    parent->right=NULL;
                else
                    parent->left=NULL;
                return;
            }
            if(temp==NULL)
            {
                if(parent==NULL)
                {
                    rt=l;
                    return;
                }
                else
                {
                    if(l->val>parent->val)
                        parent->right=l;
                    else
                        parent->left=l;
                    
                    return;
                }
            }
            while(temp->left!=NULL)
            {
                temp=temp->left;
            }
            temp->left=l;
            if(parent==NULL)
            {
                rt=r;
                return;
            }
            if(parent->val>r->val)
                parent->left=r;
            else
                parent->right=r;
            
            return;
        }
        if(key>root->val)
             helper(root->right,root,key);
        else
             helper(root->left,root,key);
    }
};