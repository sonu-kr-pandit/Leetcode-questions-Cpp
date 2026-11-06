class Solution {
public:
    int getSum(int i , int j , vector<vector<int>> &grid){
        int ans = grid[i][j];
        for(int  y = j-1 ; y <= j+1 ; y++){
            ans+= (grid[i-1][y]+grid[i+1][y]);
        }
        return ans;
    }
    int maxSum(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 1 ; i<n-1 ; i++){
            for(int j = 1; j<m-1 ; j++){
                ans = max(ans , getSum(i , j , grid));
            }
        }
        return ans;
        
    }
};