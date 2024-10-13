class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* p=head;
       while(p->next!=0 && p->next->next!=0){
           p->next=p->next->next;
           p=p->next;
           
       }
       p->next=NULL;
       
       
    
        
        //return head;
        
    }
};
