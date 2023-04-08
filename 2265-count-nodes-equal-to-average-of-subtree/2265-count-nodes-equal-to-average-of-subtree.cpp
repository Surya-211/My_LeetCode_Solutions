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
    
    int count=0;
    
    int averageOfSubtree(TreeNode* root) {
        pair<int,int>p=average(root);
        return count;
    }
    
    pair<int,int> average(TreeNode* root)
    {
        if(root==NULL)
            return {0,0};
        pair<int,int>p1=average(root->left);
        pair<int,int>p2=average(root->right);
        int sum=root->val+p1.first+p2.first;
        int n=1+p1.second+p2.second;
        if(sum/n==root->val)
            count++;
        pair<int,int>p;
        p.first=sum;
        p.second=n;
        return p;
    }
};