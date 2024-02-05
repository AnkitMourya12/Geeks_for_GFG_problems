 Node *sortedInsert(Node* head, int data)
    {
       //Your code here 
       Node *ans = new Node(data);
       if(!head){
           ans->next=ans;
           return ans;
       }
       Node *temp=head,*temp2=NULL;
       do{
           temp2=temp;
           temp=temp->next;
           if(data>=temp2->data and data<=temp->data)break;
       }while(temp!=head);
       temp2->next=ans;
       ans->next=temp;
       if(data<head->data)return ans;
       return head;
    }
