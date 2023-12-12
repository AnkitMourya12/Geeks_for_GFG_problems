int maxGold(int n, int m, vector<vector<int>> M)
    {
        int arr[n][m];
        for(int j=m-1;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
               if(j==m-1)
               arr[i][j]=M[i][j];
               
               else
              { int up=(i-1)>=0?arr[i-1][j+1]:0;
               int r=max(up,arr[i][j+1]);
               int ld=(i+1)<n?arr[i+1][j+1]:0;
               int maxi=max(r,ld);
               arr[i][j]=maxi+M[i][j];
               
              }
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=max(arr[i][0],res);
        }
        return res;
    }
};
