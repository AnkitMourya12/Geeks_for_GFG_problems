class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
           int fb=INT_MAX;
           int fs=INT_MIN;
             int sb=INT_MAX;
           int ss=INT_MIN;
           for(auto i:price){
               fb=min(fb,i);
               fs=max(fs,i-fb);
               sb=min(sb,i-fs);
               ss=max(ss,i-sb);
           }
           return ss;
        }
};
