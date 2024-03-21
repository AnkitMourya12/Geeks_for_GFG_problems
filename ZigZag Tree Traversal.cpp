class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
        vector <int> zigZagTraversal(Node* root)
    {
        bool direction = true;
        queue<Node*>q;
        vector<int>ans;
        if(!root) return ans;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int>temp;
            for(int i = 0;i<size;i++)
            {
                root = q.front();
                q.pop();
                temp.push_back(root->data);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            if(!direction)
            {
                reverse(temp.begin(),temp.end());
            }
            direction = !direction;
            ans.insert(ans.end(), temp.begin(), temp.end());
        }
        return ans;
    }
};
