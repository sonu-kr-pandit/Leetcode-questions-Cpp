class Solution {
public:
    bool dfs(int src , vector<vector<int>>& adj , vector<bool> &vis , vector<bool> &path){
        vis[src] = true;
        path[src] = true;
        for(auto it : adj[src]){
            if(!vis[it]){
                if(dfs(it , adj , vis , path)){
                    return true;
                }
            } else{
                if(path[it]){
                    return true;
                }
            }
        }
        path[src]= false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        vector<bool> path(n, false);
        for(auto it : prerequisites){
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            // adj[v].push_back(u);

        }

        for(int i = 0 ; i< n ; i++){
            if(!vis[i]){
                if(dfs( i , adj , vis , path)){
                    return false;
                }
            }
        }
        return true;



        
    }
};