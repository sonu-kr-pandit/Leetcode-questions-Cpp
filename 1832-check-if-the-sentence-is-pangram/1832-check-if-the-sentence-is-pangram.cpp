
class Solution {
public:
    bool checkIfPangram(string sentence) {
        // vector<int> freq(26, 0);

        // for(char ch : sentence) {
        //     freq[ch - 'a']++;
        // }

        // for(int count : freq) {
        //     if(count == 0)
        //         return false;
        // }

        // return true;


         unordered_set<char> st;

        for(char ch : sentence) {
            st.insert(ch);
        }

        return st.size() == 26;
    }
};