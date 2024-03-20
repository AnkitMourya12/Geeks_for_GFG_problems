class Solution
{
public:
int ans=0;
    int max_len = 0;
    void solve(Node *root, int sum, int len){
        if(root==NULL){
            if(len > max_len){
                ans = sum;
                max_len = len;
            }
            if(len == max_len){
                ans = max(ans,sum);
            }
            return;
        }
        solve(root->left,sum+root->data,len+1);
        solve(root->right,sum+root->data,len+1);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        solve(root,0,1);
        return ans;
    }
};
