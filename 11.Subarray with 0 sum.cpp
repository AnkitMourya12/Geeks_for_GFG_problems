class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++ )
        {
            sum=sum+arr[i];
            mp[sum]++;
            if(mp[sum]>1||sum==0)
            {
                return true;
            }
        }
        return false;
    }
};
