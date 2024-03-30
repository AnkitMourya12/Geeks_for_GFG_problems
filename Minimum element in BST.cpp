class Solution {
  public:
  int minValu(Node* root,int minn) {
        while(root!=NULL)
         {
             
         minn=min(root->data,minn);
         root=root->left;
            
        }
        return minn;
       
      
        // Code here
    }
    int minValue(Node* root){
       int ans=minValu(root,root->data);
       return ans;
        // Code here
    }
};
