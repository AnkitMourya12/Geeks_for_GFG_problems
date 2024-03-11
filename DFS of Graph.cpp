class Solution {
public:
    void dfs(int node, vector<int>& visited, vector<int>& result, vector<int> adj[]) {
        visited[node] = 1;

        result.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited, result, adj);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> result;

        vector<int> visited(V, 0);

        dfs(0, visited, result, adj);

        return result;
    }
};
