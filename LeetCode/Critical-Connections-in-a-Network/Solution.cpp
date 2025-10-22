class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        // Step 1: Build adjacency list
        vector<vector<int>> adj(n);
        for (auto &c : connections) {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        
        vector<int> disc(n, -1); // discovery time
        vector<int> low(n, -1);  // lowest discovery time reachable
        vector<vector<int>> bridges;
        int time = 0;
        
        // DFS function as a lambda
        function<void(int,int)> dfs = [&](int u, int parent) {
            disc[u] = low[u] = time++;
            
            for (int v : adj[u]) {
                if (v == parent) continue; // ignore edge to parent
                
                if (disc[v] == -1) { // if v is unvisited
                    dfs(v, u);
                    low[u] = min(low[u], low[v]);
                    
                    // check if edge (u,v) is a bridge
                    if (low[v] > disc[u]) {
                        bridges.push_back({u, v});
                    }
                } else { // back edge
                    low[u] = min(low[u], disc[v]);
                }
            }
        };
        
        // Start DFS from any node, e.g., 0
        dfs(0, -1);
        
        return bridges;
    }
};
