
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int st = 0, ans = 0;
        int maxFreq = 0;

        unordered_map<char, int> mp;

        for (int ht = 0; ht < n; ht++) {

            mp[s[ht]]++;

            maxFreq = max(maxFreq, mp[s[ht]]);

            while ((ht - st + 1) - maxFreq > k) {
                mp[s[st]]--;

                if (mp[s[st]] == 0) {
                    mp.erase(s[st]);
                }

                st++;
            }

            ans = max(ans, ht - st + 1);
        }

        return ans;
    }
};
