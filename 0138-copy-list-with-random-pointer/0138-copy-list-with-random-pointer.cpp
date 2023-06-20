/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>m;
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* t=new Node(temp->val);
            m[temp]=t;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            Node* t=m[temp];
            t->next=m[temp->next];
            t->random=m[temp->random];
            temp=temp->next;
        }
        return m[head];
    }
};