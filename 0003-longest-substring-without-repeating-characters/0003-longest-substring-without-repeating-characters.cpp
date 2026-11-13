class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int st = 0 , ans = 0;
        unordered_map<int , int> mp;
        for(int ht = 0 ; ht < n ; ht++){
            mp[s[ht]]++;
            int k = ht-st+1;
            while(mp.size() < k){
                mp[s[st]]--;
                if(mp[s[st]] == 0){
                    mp.erase(s[st]);
                }
                st++;
                k = ht-st +1;
            }
            int len  = ht-st+1;
            ans =max(ans , len);

        }
        return ans;
        
    }
};