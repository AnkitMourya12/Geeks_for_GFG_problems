class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n=mat.size();
        Node *up=NULL,*pre=NULL,*strt=NULL,*head=NULL;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            Node*tem=new Node(mat[i][j]);
            if(!head) head=tem;
            if(!up) up=strt;
            if(i!=0){
                up->down=tem;
                up=up->right;
                
            }
            
            if(j==0)strt=tem;
            if(j!=0) pre->right=tem;
            pre=tem;
        }
       
      }
      return head;
    
    }
    
    
};
