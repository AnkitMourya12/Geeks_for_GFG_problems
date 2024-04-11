//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        vector<int>bit;
        while(n){
            bit.push_back(n&1);
            n=n/2;
        }
       reverse(bit.begin(),bit.end());
       for(int i=1;i<bit.size();i++){
           bit[i]=bit[i]^bit[i-1];
       }
       int cnt=bit.size()-1;
       int ans=0;
       for(int i=0;i<bit.size();i++)
       {
           ans+=bit[i]*pow(2,cnt);
           cnt--;
       }
       return ans;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends
