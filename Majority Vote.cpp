class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>ans;
        int ct=0;
        int c=n/3;
        for(auto x:mp){
            int d=x.second;
            if(d>c){
                ans.push_back(x.first);
                ct++;
            }
        }
        if(ct!=0)
        return ans;
        
        return {-1};
    }
};
