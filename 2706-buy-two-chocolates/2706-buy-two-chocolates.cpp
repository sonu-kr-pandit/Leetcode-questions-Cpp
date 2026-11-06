class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin() , prices.end());
        if(prices[0]+prices[1] > money){
            return money;
        }
        return money - prices[0]-prices[1];

        // int min1 = 101, min2 = 101;

        // for (int i = 0; i < prices.size(); i++) {
        //     if (min1 > prices[i]) {
        //         min2 = min1;
        //         min1 = prices[i];
        //     } else if (min2 > prices[i]) {
        //         min2 = prices[i];
        //     }
        // }

        // if (money - (min1 + min2) >= 0) {
        //     return money - (min1 + min2);
        // }
        // return money;
    }
};