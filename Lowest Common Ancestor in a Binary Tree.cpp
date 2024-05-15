class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    bool ispath(Node*root,vector<Node*>&path,int n){
        if(root==NULL){
            return false;
        }
        path.push_back(root);
        if(root->data==n)
        return true;
        
        if(ispath(root->left,path,n) || ispath(root->right,path,n)){
            return true;
        }
        path.pop_back();
        
        return false;
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here vect
       vector<Node*>p1,p2;
       
       if(!ispath(root,p1,n1)||!ispath(root,p2,n2)){
           return NULL;
       }
       
       Node*ans=NULL;
       for(int i=0;i<p1.size() && i<p2.size(); i++){
           if(p1[i]==p2[i]){
               ans=p1[i];
           }
       }
       return ans;
    }
};
