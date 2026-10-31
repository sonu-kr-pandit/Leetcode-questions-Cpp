class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;

        for( auto it : accounts ){
            int cnt = 0;
            for(int lt : it){
                cnt += lt;
            }
            ans = max(ans , cnt);
        }
        return ans;
    }
};