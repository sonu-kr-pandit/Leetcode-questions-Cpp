class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxprft = 0;
        int bestbuy = prices[0];
        for(int i =1 ; i< prices.size(); i++){
            if(prices[i]> bestbuy){
                maxprft +=  prices[i]-bestbuy ;
            }
             bestbuy =  prices[i];
        }
       
        return maxprft;
        
    }
};
