void func(Node* root,vector<int>&v)
{
       if(root==NULL){
          return;
      }
       v.push_back(root->data);
      func(root->left,v);
     
      func(root->right,v);
      
  }
    vector<int> preorder(Node* root) {
        vector<int>v;
        func(root,v);
        return v;
    }
