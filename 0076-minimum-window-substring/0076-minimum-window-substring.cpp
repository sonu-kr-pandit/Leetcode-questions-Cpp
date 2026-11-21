class Solution {
public:
    bool TRUE(vector<int>& have, vector<int>& needed) {
        for (int i = 0; i < 256; i++) {
            if (have[i] < needed[i]) {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();

        int low = 0, high = 0;
        int st = 0, res = 0;

        vector<int> have(256, 0), needed(256, 0);

        for (int i = 0; i < m; i++) {
            needed[t[i]]++;
        }

        for (high = 0; high < n; high++) {

            have[s[high]]++;

            while (TRUE(have, needed)) {

                int len = high - low + 1;

                if (res == 0 || len < res) {
                    res = len;
                    st = low;
                }

                have[s[low]]--;
                low++;
            }
        }

        return s.substr(st, res);
    }
};