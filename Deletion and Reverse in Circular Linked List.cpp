class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
        Node*p=NULL,*c=head,*nex=head->next;      
        while(nex!=head){
            p=nex->next;
            nex->next=c;
            c=nex;
            nex=p;
        }
       
        head->next=c;
        
        return c;   
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        Node*p=head;
        Node*s=head->next;
        if(head->data==key){
        while(s!=head){
            p=s;
            s=s->next;
            
        }
        
    }
        else{
             while(s!=head && s->data!=key){
            p=s;
            s=s->next;
            
        }
        }
        if(head->data==key || s!=head){
            p->next=s->next;
        }
        
        return head->data==key?p->next:head;
    }
};
