class Solution
{
	public:
	void dfs(vector<int>adj[], int s, stack<int>&st,vector<bool>&vis){
	    vis[s]=true;
	    
	    for(auto &v:adj[s]){
	        if(!vis[v]){
	            dfs(adj,v,st,vis);
	        }
	    }
	    st.push(s);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool>vis(V,false);
	    stack<int>st;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(adj,i,st,vis);
	        }
	    }
	    vector<int>ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
