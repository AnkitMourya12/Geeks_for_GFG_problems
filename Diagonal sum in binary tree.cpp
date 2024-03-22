class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        // Add your code here
            queue<pair<Node*,int> > q;
        q.push({root,0});
        map<int,int> mp;
        while(!q.empty()){
            Node* temp=q.front().first;
            int hd=q.front().second;
            q.pop();
            while(temp){
                mp[hd]+=temp->data;
                if(temp->left){
                    q.push({temp->left,hd+1});
                }
                temp=temp->right;
            }
        }
        vector<int> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
