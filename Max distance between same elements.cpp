class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        
        int maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                int diff=mp[arr[i]]-i;
                maxi=max(maxi,diff);
            }
        }
        return maxi;
    }
};
