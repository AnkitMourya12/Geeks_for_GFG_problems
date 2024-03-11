//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
vector<int>dp(100001,-1);
class Solution {
  public:
 
  int mod=1000000007.;
  int help(int n,vector<int>&dp){
       if(dp[n]!=-1) return dp[n];
        if(n<=1)
        return n;
        return dp[n]=help(n-1,dp)%mod+ help(n-2,dp)%mod;
  }
   
    int nthFibonacci(int n){
        // code here
        vector<int>dp(100000,-1);
       return help(n,dp)%mod;
       
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
