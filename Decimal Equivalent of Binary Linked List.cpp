class Solution
{
    public:
    
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
          // long long n=len(head)-1;
           long long unsigned int sum=0;
        int mod=1e9+7;
           Node *t=head;
           //long long p;
           while(t!=NULL){
              
               sum=(sum*2+t->data)%mod;
              // n--;
               t=t->next;
               
           }
           return sum;
           
        }
};
