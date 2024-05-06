void helper(Node* node,vector<int> &v){
    if(!node) return;
    if(node->left==NULL or node->right==NULL){
        if(node->left)
        v.push_back(node->left->data);
        
         if(node->right)
        v.push_back(node->right->data);
    }
    
    
    
    helper(node->left,v);
    helper(node->right,v);
}

vector<int> noSibling(Node* node)
{
    // code here
    vector<int>v;
   
    helper(node,v);
    sort(v.begin(),v.end());
    if(v.size()==0) return {-1};
    return v;
}
