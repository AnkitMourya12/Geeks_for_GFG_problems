class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int z=0;
        int one=0;
        int two=0;
        
        Node*t=head;
        while(t!=NULL)
        {
            if(t->data==0){
                z++;
            }
            else if(t->data==1)
            one++;
            
            else
            two++;
            
            t=t->next;
            
        }
        Node*temp=head;
        while(temp!=NULL){
            if(z!=0){
                temp->data=0;
                
                z--;
            }
            else if(one!=0){
                temp->data=1;
              
                one--;
            }
            else if(two!=0){
                temp->data=2;
               
                two--;
            }
            temp=temp->next;
        }
        return head;
        
    }
};
