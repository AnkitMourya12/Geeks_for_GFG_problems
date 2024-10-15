class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int ps=0;
        int sc=0;
        for(int i=0;i<n;i++){
            ps=arr[i]+ps;
            int x=ps-tar;
            if(mp.find(x)!=mp.end()){
                sc=sc+mp[x];
            }
            mp[ps]++;
            
        }
        return sc;
    }
};
