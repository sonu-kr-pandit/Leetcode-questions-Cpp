class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int st = 0 , ans = 0;
        unordered_map<int , int> mp;
        for(int ht = 0 ; ht <n ; ht++){
            mp[fruits[ht]]++;
            while(mp.size() > 2){
                mp[fruits[st]]--;
                if(mp[fruits[st]]==0){
                    mp.erase(fruits[st]);
                }
                st++;
            }
           int len = ht - st + 1;
            ans = max(ans, len);
        }
        return ans;
        
    }
};