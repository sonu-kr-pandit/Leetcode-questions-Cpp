class Solution {
public:
    int V;
    list<int>* l;
    // Solution(int n){
    //     V = n;
    //     l = new list<int> [V];
    // }

    Solution() {
        V = 0;
        l = nullptr;
    }

    void init(int n) {
        V = n;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool pathHelper(int src, int dest, vector<bool>& vis) {
        if (src == dest) {
            return true;
        }
        vis[src] = true;
        list<int> nbrs = l[src];
        for (int v : nbrs) {
            if (!vis[v]) {
                if (pathHelper(v, dest, vis)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        // Solution graph(n);
        Solution graph;
        graph.init(n);
        for (int i = 0; i < edges.size(); i++) {
            graph.addEdge(edges[i][0], edges[i][1]);
        }

        vector<bool> vis(n, false);
        return graph.pathHelper(src, dest, vis);
    }
};