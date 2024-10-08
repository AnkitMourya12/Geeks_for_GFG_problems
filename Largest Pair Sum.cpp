class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        int m1=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=maxi){
                m1=max(m1,arr[i]);
            }
        }
        return m1+maxi;
    }
};
