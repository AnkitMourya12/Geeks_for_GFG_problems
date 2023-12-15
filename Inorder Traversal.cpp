class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void func(Node* root,vector<int> &v) {
        // Your code here
       if(root==NULL){
          return;
      }
      func(root->left,v);
      v.push_back(root->data);
      func(root->right,v);
      
  }
    vector<int> inOrder(Node* root) {
        vector<int>v;
        func(root,v);
        return v;
    }
};
