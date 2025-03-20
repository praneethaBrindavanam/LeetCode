

class Solution {
    vector<int> parent;
    vector<int> minPathCost;

    int findRoot(int node) {
        if (parent[node] != node) {
            parent[node] = findRoot(parent[node]);
        }
        return parent[node];
    }

public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        parent.resize(n);
        minPathCost.assign(n, -1);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        for (const auto& edge : edges) {
            int source = edge[0];
            int target = edge[1];
            int weight = edge[2];

            int sourceRoot = findRoot(source);
            int targetRoot = findRoot(target);

            if (minPathCost[sourceRoot] == -1) {
                minPathCost[sourceRoot] = weight;
            } else {
                minPathCost[sourceRoot] &= weight;
            }

            if (minPathCost[targetRoot] == -1) {
                minPathCost[targetRoot] = weight;
            } else {
                minPathCost[targetRoot] &= weight;
            }

            if (sourceRoot != targetRoot) {
                parent[sourceRoot] = targetRoot;
                minPathCost[targetRoot] &= minPathCost[sourceRoot];
            }
        }

        vector<int> result(query.size());
        for (size_t i = 0; i < query.size(); i++) {
            int start = query[i][0];
            int end = query[i][1];

            if (start == end) {
                result[i] = 0;
            } else if (findRoot(start) != findRoot(end)) {
                result[i] = -1;
            } else {
                result[i] = minPathCost[findRoot(start)];
            }
        }

        return result;
    }
};
