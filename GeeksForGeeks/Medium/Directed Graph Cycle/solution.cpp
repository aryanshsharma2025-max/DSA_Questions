class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj,
             vector<int>& vis, vector<int>& pathVis) {

        vis[node] = 1;
        pathVis[node] = 1;

        for (auto it : adj[node]) {

            if (!vis[it]) {
                if (dfs(it, adj, vis, pathVis))
                    return true;
            }

            else if (pathVis[it]) {
                return true;
            }
        }

        pathVis[node] = 0;
        return false;
    }

    bool isCyclic(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }

        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pathVis))
                    return true;
            }
        }

        return false;
    }
};