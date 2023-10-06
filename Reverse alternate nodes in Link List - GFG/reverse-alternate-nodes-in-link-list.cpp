//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
#include<bits/stdc++.h>
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        Node* temp=odd;
        vector<int>a;
        vector<int>b;
        while(temp!=NULL)
        {
            a.push_back(temp->data);
            temp=temp->next;
            if(temp!=NULL)
            {
                b.push_back(temp->data);
                temp=temp->next;
            }
        }
        temp=odd;
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++)
        {
            temp->data=a[i];
            temp=temp->next;
        }
        for(int i=0;i<b.size();i++)
        {
            temp->data=b[i];
            temp=temp->next;
        }
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends