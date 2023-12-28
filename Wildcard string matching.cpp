class Solution{
    public:
    bool help(string wild, string pattern,int i,int j,vector<vector<int>>&dp)
    {
        if(i==wild.size() and j== pattern.size()) return true;
        if(i==wild.size() or j== pattern.size()) return false; 
        if(dp[i][j]!=-1) return dp[i][j];
        if(wild[i]==pattern[j] or wild[i]=='?') return dp[i][j]= help(wild,pattern ,i+1,j+1,dp);
        if(wild[i]=='*') return dp[i][j]= help(wild,pattern ,i+1,j,dp)|| help(wild,pattern ,i,j+1,dp)|| help(wild,pattern ,i+1,j+1,dp);
        return false;
    }
    bool match(string wild, string pattern)
    {
        // code here 
       
        vector< vector<int>>dp(wild.size(), vector<int>(pattern.size(),-1));
        return help(wild,pattern,0,0,dp);
    }
};
