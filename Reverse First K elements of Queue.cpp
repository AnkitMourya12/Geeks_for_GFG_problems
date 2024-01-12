class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.q.be
        int n=q.size();
        stack<int> st;
        
        while(k--){
            st.push(q.front());
            q.pop();
            n--;
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(n--){
            int x=q.front();
            q.pop();
            q.push(x);
        }
        return q;
        
    }
};
