//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node* ans=reverse(head);
        int carry=1;
        Node* temp=ans;
        Node* prev=temp;
        while(temp!=NULL)
        {
            if((temp->data+carry)==10)
            {
                temp->data=0;
            }
            else
            {
                temp->data=temp->data+1;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            Node* newNode=new Node(1);
            prev->next=newNode;
        }
        return reverse(ans);
        
    }
    
    Node* reverse(Node* head)
    {
        if(head==NULL||head->next==NULL)
        return head;
        Node *tail=head->next;
        Node* ans=reverse(head->next);
        tail->next=head;
        head->next=NULL;
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends