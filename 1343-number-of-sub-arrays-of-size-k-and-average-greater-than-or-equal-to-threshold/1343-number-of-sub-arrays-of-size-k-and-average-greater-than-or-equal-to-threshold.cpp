class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size() , cnt = 0;
        int sumWindow = 0;
        for(int i = 0; i < k; i++){
            sumWindow += arr[i];
        }

        if(sumWindow >= threshold * k){
            cnt++;
        }
        for(int i = k; i < n; i++){

            sumWindow += arr[i];
            sumWindow -= arr[i-k];

            if(sumWindow >= threshold * k){
                cnt++;
            }
        }
        return cnt;
        
    }
};