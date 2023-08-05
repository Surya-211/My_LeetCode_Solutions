/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            Node* front=q.front();
            q.pop();
            if(front->left!=NULL)
                q.push(front->left);
            if(front->right!=NULL)
                q.push(front->right);
            for(int i=1;i<=s;i++)
            {
                if(i==s)
                {
                    front->next=NULL;
                }
                else
                {
                    Node* f=q.front();
                    q.pop();
                    front->next=f;
                    front=f;
                    if(f->left!=NULL)
                        q.push(f->left);
                    if(f->right!=NULL)
                        q.push(f->right);
                }
            }
        }
        return root;
    }
};