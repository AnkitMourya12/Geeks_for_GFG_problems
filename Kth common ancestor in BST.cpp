class Solution
{
    public:
    
    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
          int total = 1;
        Node* temp = root;
        while(root){
            int data = root->data;
            if(x<data && y < data){
                root = root->left;
                total++;
            }
            else if(x>data && y>data){
                root = root->right;
                total++;
            }
            else break;
        }
        total-=k;
        int cnt = 1;
        total++;
        root = temp;
        while(root){
            if(total == cnt ) return root->data;
            int data = root->data;
            if(x<data && y < data){
                root = root->left;
                cnt++;
            }
            else if(x>data && y>data){
                root = root->right;
                cnt++;
            }
            else break;
        }
        return -1;
    }
};
