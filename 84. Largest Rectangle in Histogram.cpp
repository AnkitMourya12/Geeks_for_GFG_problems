class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       vector<int>ps=pre_small(heights);
        vector<int>ns=next_small(heights);
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
           int t=(ns[i]-ps[i]-1)*heights[i];
           if(t>ans)
           {
               ans=t;
           }

        }
        return ans;
    }
    vector<int> pre_small(vector<int> &heights)
    {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            int ele=st.empty()?-1:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        return ans;
    }
    vector<int> next_small(vector<int> &heights)
    {
        vector<int>ans;
        stack<int>st;
        int n=heights.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            int ele=st.empty()?n:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
