class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
      //int s=st.size();
      stack<int> ans;
      stack<int> ans1;
     
      while(!st.empty())
     {
         ans.push(st.top());
         st.pop();
     }
     
     ans1.push(x);
     while(!ans.empty())
     {
         ans1.push(ans.top());
         ans.pop();
     }
      return ans1;
