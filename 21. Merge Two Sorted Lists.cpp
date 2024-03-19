class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode*t2=list2;
       ListNode*newNode=new ListNode(-1);
        ListNode*t3=newNode;

        while(t1!=NULL && t2!=NULL){
            if(t1->val<t2->val){
                t3->next=t1;
                t1=t1->next;

            }
            else {
               t3->next=t2;
                
                t2=t2->next;

            }
            
            t3=t3->next;

        }

        while(t1!=NULL){
            t3->next=t1;
            t1=t1->next;
            t3=t3->next;
           
        }
        while(t2!=NULL)
        {
            t3->next=t2;
            t2=t2->next;
            t3=t3->next;
        }

        return newNode->next;
        
    }
};
