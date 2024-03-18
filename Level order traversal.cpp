class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    
   
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
     q.push(root);
     while(!q.empty()){
         Node * u=q.front();
         q.pop();
         ans.push_back(u->data);
         if(u->left) q.push(u->left);
         if(u->right) q.push(u->right);
         
     }
     return ans;
      
    }
};
