class Solution {
public:
    vector<int> topoSort(vector<vector<int>>& adj) {
        
        int V = adj.size();

        vector<int> indegree(V, 0);

        // Calculate indegree
        for(int i = 0; i < V; i++) {
            for(int neighbour : adj[i]) {
                indegree[neighbour]++;
            }
        }

        queue<int> q;

        // Push vertices with indegree 0
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> ans;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for(int neighbour : adj[node]) {
                indegree[neighbour]--;

                if(indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        return ans;
    }
};
