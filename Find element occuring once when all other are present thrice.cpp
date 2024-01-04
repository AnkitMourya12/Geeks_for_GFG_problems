class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int c=0;
        unordered_map<int,int>mp;
        int ans;
        for(int i=0;i<N;i++)
        {
            mp[arr[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second<2)
            {
                ans=x.first;
                c++;
            }
            
        }
        if(c==1)
        return ans;
        return 0;
    }
};
