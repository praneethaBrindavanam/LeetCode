class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<unordered_set<int>> graph(n);
        vector<bool> visited(n, false);
        for (auto& edge : edges) {
            graph[edge[0]].insert(edge[1]);
            graph[edge[1]].insert(edge[0]);
        }
        int completeCount = 0;
        function<void(int, unordered_set<int>&, int&)> dfs = [&](int node, unordered_set<int>& nodes, int& edgeCount) {
            visited[node] = true;
            nodes.insert(node);
            
            for (int neighbor : graph[node]) {
                edgeCount++;
                if (!visited[neighbor]) {
                    dfs(neighbor, nodes, edgeCount);
                }
            }
        };

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                unordered_set<int> nodes;
                int edgeCount = 0;
                dfs(i, nodes, edgeCount);
                int k = nodes.size();
                if (edgeCount / 2 == k * (k - 1) / 2) {
                    completeCount++;
                }
            }
        }
        return completeCount;
    }
};
