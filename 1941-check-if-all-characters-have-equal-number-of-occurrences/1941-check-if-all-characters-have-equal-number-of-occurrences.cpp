class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);

        for(char ch : s) {
            freq[ch - 'a']++;
        }

        int count = 0;

        for(int f : freq) {
            if(f != 0) {
                if(count == 0)
                    count = f;
                else if(count != f)
                    return false;
            }
        }

        return true;
    }
};