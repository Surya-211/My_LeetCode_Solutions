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
    int minimumOperations(TreeNode* root) {
        int count=0;
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            unordered_map<int,int>m;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                v.push_back(front->val);
                m[front->val]=i;
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
            vector<int>temp=v;
            sort(temp.begin(),temp.end());
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=temp[i])
                {
                    int ind=m[temp[i]];
                    v[ind]=v[i];
                    m[v[ind]]=ind;
                    count++;
                }
            }
        }
        return count;
    }
};