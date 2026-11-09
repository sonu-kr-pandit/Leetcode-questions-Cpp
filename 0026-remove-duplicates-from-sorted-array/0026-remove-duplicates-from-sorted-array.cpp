class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        int move = 1;
        int unq = 1;
        while(move <n){
            if(nums[move] == nums[move-1]){
                move++;
                continue;
            }
            nums[idx+1] = nums[move];
            unq++;
            move++;
            idx++;
        }
        return unq;
    }
};