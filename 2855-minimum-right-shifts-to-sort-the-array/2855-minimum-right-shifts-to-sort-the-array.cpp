class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int min = -1 , cnt = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i-1] > nums[i]){
                min = i;
                cnt++;
            }
        }
        if(min == -1 ){return 0;}
        
        if(cnt > 1|| nums[0] < nums[nums.size()-1]){
            return -1;
        }
        return nums.size()-min;

    }
};