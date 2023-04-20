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
    int widthOfBinaryTree(TreeNode* root) {
        
        int maxi=1;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                pair<TreeNode*,int> p=q.front();
                q.pop();
                if(p.first->left!=NULL)
                {
                    long long ind=p.second;
                    q.push({p.first->left,2*ind+1});
                }
                if(p.first->right!=NULL)
                {
                    long long ind=p.second;
                    q.push({p.first->right,2*ind+2});
                }
            }
            if(q.empty())
                break;
            int count=q.back().second-q.front().second+1;
            maxi=max(count,maxi);
        }
        return maxi;
    }
};