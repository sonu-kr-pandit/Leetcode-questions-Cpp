class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;
    void DFS(int u , int target  , vector<vector<int>>& graph){
        temp.push_back(u);
        if(u == target){
            ans.push_back(temp);
        }else{
            for(int &v : graph[u]){
                DFS(v , target  , graph);
            }
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target = graph.size()-1;
        int src = 0;

        // vector<int> temp;
        DFS(0 , target , graph);
        return ans;
        
    }
};