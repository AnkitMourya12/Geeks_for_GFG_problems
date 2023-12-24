class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
      vector< pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
          v.push_back({price[i],i+1});
        }
        
        sort(v.begin(),v.end());
        int c=0;
        for(auto it:v)
        {
           int maxby=min(k/it.first,it.second);
           c=c+maxby;
           k=k-it.first*maxby;
           
            
        }
        return c;
    }
};
