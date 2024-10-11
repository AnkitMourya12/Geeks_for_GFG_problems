class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        // Code here
        int n=arr.size();
         vector<int> nums = arr;
        for(int i=0;i<n;i++){
            if(arr[i]==-1){
                continue;
            }
            if(arr[i]==i){
                continue;
            }
            else{
                while(nums[i] != -1 && nums[i] != i){
                    swap(nums[i], nums[nums[i]]);
                }
            }
           
        }
        return nums;
    }
};
