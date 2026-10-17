class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0 , end = nums.size()-1;

        if(nums.size() == 1 ){
            return 0;
        }
        // if(nums.size() == 2){
        //     return max(nums[0],nums[1]);
        // }
        while(st<end){
            int mid = st + (end-st)/2;
             if (nums[mid] > nums[mid + 1]) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
        
    }
};