class Solution {
  public:
    
    struct Node* arrangeCV(Node* head) {
        // Code here
        Node* vowel=new Node(-1);
        Node* conso=new Node(-1);
        Node* temp=head;
        Node* vowelh=vowel;
        Node* consoh=conso;
        
        while(temp!=NULL){
            if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u'){
                vowel->next=new Node(temp->data);
                vowel=vowel->next;
            }
            else{
                conso->next=new Node(temp->data);
                conso=conso->next;
            }
            temp=temp->next;
        }
        
        vowel->next=consoh->next;
        return vowelh->next;
    }
};
