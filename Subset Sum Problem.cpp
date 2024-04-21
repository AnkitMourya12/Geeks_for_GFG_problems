//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

bool helper(vector<int>arr, int sum,int n,vector<vector<int>>&dp){
   
    if(dp[n][sum]!=-1) return dp[n][sum];
    
    if(arr[n-1]<=sum){
        return dp[n][sum]=helper(arr,sum-arr[n-1],n-1,dp)||helper(arr,sum,n-1,dp);
    }
    else 
    return dp[n][sum]=helper(arr,sum,n-1,dp);
}

    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>>dp(101,vector<int>(sum+1,-1));
        for(int i=0;i<=sum;i++){
            dp[0][i]=false;
        }
          for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        return helper(arr,sum,n,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
