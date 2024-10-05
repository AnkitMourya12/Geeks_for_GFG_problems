
class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
       int ans=1;
       for(int i=0;i<arr.size();i++){
           if(ans<arr[i]) return ans;
           ans+=arr[i];
       }
       return ans;
    }
};
