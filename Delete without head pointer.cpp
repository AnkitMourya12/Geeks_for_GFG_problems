
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node*t=del_node;
       
       t->data=t->next->data;
       t=t->next;
       del_node->next=t->next;
       
       
       
       
    }

};
