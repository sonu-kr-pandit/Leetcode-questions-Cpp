class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = 0; 
        vector<int> ans;
        while( size < n){
            ans.push_back(nums[size]);
            ans.push_back(nums[n+size]);
            size++;
        }
        return ans;
        
    }
};