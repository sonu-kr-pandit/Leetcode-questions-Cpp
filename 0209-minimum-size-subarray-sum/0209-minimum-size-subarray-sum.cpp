class Solution {
public:
    int minSubArrayLen(int tgt , vector<int>& nums) {
        int n = nums.size();
        int st = 0, ht = 0;
        int ans= INT_MAX;
        int sum = 0;
        while(ht < n){
           sum = sum+nums[ht];
           while(sum >= tgt){
            int len = ht-st+1;
            ans= min(ans,len);
            sum = sum - nums[st];
            st++;
           }
           ht++;
        }
        return ans == INT_MAX ? 0 : ans;
        
    }
};