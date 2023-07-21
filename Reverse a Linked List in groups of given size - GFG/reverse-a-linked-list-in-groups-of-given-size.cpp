//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* dummy=new node(0);
        dummy->next=head;
        node* curr=dummy;
        node* next=dummy;
        node* prev=dummy;
        int count=0;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            count++;
        }
        while(count>0)
        {
            curr=prev->next;
            next=curr->next;
            if(count>=k)
            {
                for(int i=1;i<k;i++)
                {
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
                }
            }
            else
            {
                for(int i=1;i<count;i++)
                {
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
                }
            }
            prev=curr;
            count-=k;
        }
        return dummy->next;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends