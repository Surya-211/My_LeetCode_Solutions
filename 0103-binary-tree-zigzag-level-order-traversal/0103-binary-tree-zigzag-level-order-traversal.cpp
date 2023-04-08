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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>v;
        
        if(root==NULL)
            return v;
        
        queue<TreeNode*>q;
        q.push(root);
        int flag=1;
        while(!q.empty())
        {
            vector<int>a;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* front=q.front();
                a.push_back(front->val);
                q.pop();
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
            if(flag==-1)
                reverse(a.begin(),a.end());
            flag*=-1;
            v.push_back(a);
            
        }
        return v;
        
    }
};