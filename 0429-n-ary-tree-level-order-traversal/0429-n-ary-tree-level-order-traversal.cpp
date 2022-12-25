/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        ans.push_back({root->val});
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v;
            for(int i=1;i<=s;i++)
            {
                Node* front=q.front();
                q.pop();
                for(int j=0;j<front->children.size();j++)
                {
                    v.push_back(front->children[j]->val);
                    q.push(front->children[j]);
                }
            }
            if(!v.empty())
            ans.push_back(v);
            
        }
        return ans;
    }
};