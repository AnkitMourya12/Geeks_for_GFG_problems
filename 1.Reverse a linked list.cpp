
   class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* cur=head;
        struct Node* pri=NULL;
        while(cur!=NULL)
        {
            struct Node* temp=cur->next;
            cur->next=pri;
            pri=cur;
            
            cur=temp;
        }
         return pri;
   
    }
    
};
    
