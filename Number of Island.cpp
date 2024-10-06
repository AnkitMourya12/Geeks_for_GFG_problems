//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
  public:
    // Function to find the number of islands.
    
    void bfs(vector<vector<char>>& grid,int i,int j,int n,int m,vector<vector<bool>>&vis){
        queue<pair<int,int>>q;
        vis[i][j]=true;
        q.push({i,j});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int ad_row=r+i;
                    int ad_col=c+j;
                    if(ad_row>=0 && ad_row<n&&ad_col>=0 &&ad_col<m && grid[ad_row][ad_col]=='1'&& !vis[ad_row][ad_col]){
                        vis[ad_row][ad_col]=true;
                        q.push({ad_row,ad_col});
                    }
                }
            }
            
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++;
                    bfs(grid,i,j,n,m,vis);
                }
            }
        }
        return ans;
        
    }
};
//////////////////////////////////////////////////////////////////////////////////////////
//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
