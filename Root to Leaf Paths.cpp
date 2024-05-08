class Solution {
  public:
  void help(Node*root,vector<vector<int>>&ans,vector<int>tem){
      if(!root){
          return;
      }
      if(root->left==NULL&&root->right==NULL){
          tem.push_back(root->data);
          ans.push_back(tem);
          
      }
      tem.push_back(root->data);
      help(root->left,ans,tem);
      help(root->right,ans,tem);
      
  }
  
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>tem;
        help(root,ans,tem);
        return ans;
    }
};
