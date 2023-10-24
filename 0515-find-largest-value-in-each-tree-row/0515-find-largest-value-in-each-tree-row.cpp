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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>v;
        if(root==NULL)
            return v;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<s;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                maxi=max(f->val,maxi);
                if(f->left!=NULL)
                    q.push(f->left);
                if(f->right!=NULL)
                    q.push(f->right);
            }
            v.push_back(maxi);
        }
        return v;
    }
};