// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         queue<int> q;
//         int V  = graph.size();
//         vector<int> color( V , -1);
//         vector<bool> vis (V , false);
//         q.push(0);
//         color[0] = 0;
//         vis[0] = true;
//         while(q.size()>0){
//             int curr = q.front();
//             q.pop();
//             for(auto it: graph[curr]){
//                 if(!vis[it]){
//                     vis[it] = true;
//                     color[it] = 1-color[curr];
//                     q.push(it);
//                 }else{
//                     if(color[it] == color[curr]){
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;

//     }
// };



class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);
        queue<int> q;

        for (int i = 0; i < V; i++) {
            if (color[i] != -1) continue;

            q.push(i);
            color[i] = 0;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int it : graph[curr]) {
                    if (color[it] == -1) {
                        color[it] = 1 - color[curr];
                        q.push(it);
                    }
                    else if (color[it] == color[curr]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
