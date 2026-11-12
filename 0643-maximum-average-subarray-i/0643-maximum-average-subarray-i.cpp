class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        double sum = 0;
        for(int i = 0 ; i<k ; i++){
            sum+=arr[i];
        }
        double prevS = INT_MIN;
        int st = 0 , end = k;
        prevS = max(prevS , sum);
        while(end<n){
            sum = sum-arr[st];
            sum = sum+arr[end];
              prevS = max(prevS , sum);
             end++;
            st++;
        }
        return prevS/k;   
    }
};