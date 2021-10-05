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

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
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
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 


// } Driver Code Ends



/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
  struct Node *ptr=head,*pre;
  int c=0;
   while(ptr!=NULL)
   {
       c++;
       ptr=ptr->next;
   }
   if(head==NULL || c==1)
        return NULL;
    
   if(c%2==1)
        c=(c+1)/2;
    else
        c=(c/2)+1;
    ptr=head;
    pre=ptr;
    int i=0;
    while(1)
    {
        i++;
        if(i==c)
        {
            pre->next=ptr->next;
            free(ptr);
            break;
        }
        else
        {
            pre=ptr;
            ptr=ptr->next;
        }
    }
    return head;
    
}