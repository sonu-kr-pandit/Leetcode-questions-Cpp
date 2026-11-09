class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); 
        int st = 0;
        int end = n-1;
        int idx = n-1;
        vector<int> sqr(n , 0);
        while(st <= end){
            if(abs(nums[st]) > nums[end] ){
                sqr[idx] = nums[st]*nums[st];
                st++;
            }else{
                 sqr[idx] = nums[end]*nums[end];
                 end--;
            }
           
            idx--;

        }
        return sqr;
        
    }
};