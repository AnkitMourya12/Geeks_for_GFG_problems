class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        // your code here
        long long ans=0,pre=0,mod=1e9+7;
        for(int i=0;i<s.size();i++){
            long long cur=(pre*10)%mod+(s[i]-'0')*(i+1)%mod;
          
            pre=cur;
              ans=(ans+cur)%mod;
        }
        return ans;
    }
};
