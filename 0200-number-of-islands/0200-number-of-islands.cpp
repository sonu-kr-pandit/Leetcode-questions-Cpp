class Solution {
public:

    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int n, int m, int row, int col){
        vis[row][col] = true;
        grid[row][col] = '0';

        // up
        if(row-1 >= 0 && !vis[row-1][col] && grid[row-1][col] == '1'){
            dfs(grid, vis, n, m, row-1, col);
        }
        // down
        if(row+1 < n && !vis[row+1][col] && grid[row+1][col] == '1'){
            dfs(grid, vis, n, m, row+1, col);
        }
        // right
        if(col+1 < m && !vis[row][col+1] && grid[row][col+1] == '1'){
            dfs(grid, vis, n, m, row, col+1);
        }
        // left
        if(col-1 >= 0 && !vis[row][col-1] && grid[row][col-1] == '1'){
            dfs(grid, vis, n, m, row, col-1);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(grid, vis, n, m, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};