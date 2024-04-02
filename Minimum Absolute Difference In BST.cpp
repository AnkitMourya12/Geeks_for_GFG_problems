class Solution
{
    public:
    void helper(Node*root, vector<int> &v){
        if(root==NULL)
        {
            return;
        }
        helper(root->left,v);
        v.push_back(root->data);
        helper(root->right,v);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        
        vector<int> v(0);
        helper(root,v);
        int minDif=INT_MAX;
        for(int i=1;i<v.size();i++){
            int dif=v[i]-v[i-1];
            minDif=min(minDif,dif);
        }
        return minDif;
        
    }
};
