//{ Driver Code Starts
//

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
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
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

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        if(head==NULL)
        {
            Node* n=new Node(data);
            return n;
        }
        Node* temp=head;
        if(temp->data>=data)
        {
            Node* n=new Node(data);
            n->next=temp;
            return n;
        }
        Node* prev=NULL;
        int flag=0;
        while(temp!=NULL)
        {
            if(temp->data>=data)
            {
                Node* n=new Node(data);
                prev->next=n;
                n->next=temp;
                flag=1;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(flag==0)
        {
            Node* n=new Node(data);
            prev->next=n;
        }
        return head;
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends