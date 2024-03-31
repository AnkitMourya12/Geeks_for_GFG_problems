class Solution {
  public:
 
 void solve(Node* root,int n,int &ans){
      
      if(root==NULL)
      return;
      
      if(root->key<=n && root->key>ans)
      ans=root->key;
      
      if(root->key<n)
      solve(root->right,n,ans);
      else
      solve(root->left,n,ans);
  }
    int findMaxForN(Node* root, int n) {
        int ans=-1;
        solve(root,n,ans);
        return ans;
    }
};
