class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int maxi=INT_MIN;
        if(n<2) return -1;
        
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,arr[i]+arr[i+1]);
        }
        return maxi;
    }
};
