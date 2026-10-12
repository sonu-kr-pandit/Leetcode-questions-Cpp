class Solution {
public:
    struct Node {
        unordered_map<char, Node*> mp;
        bool endofword;
        Node() { endofword = false; }
    };

    Node* root;

    Solution() { root = new Node(); }

    void insert(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (temp->mp.count(word[i]) == 0) {
                temp->mp[word[i]] = new Node();
            }
            temp = temp->mp[word[i]];
        }
        temp->endofword = true;
    }

    bool search(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (temp->mp.count(word[i])) {
                temp = temp->mp[word[i]];
            } else {
                return false;
            }
        }
        return temp->endofword;
    }

     bool solve(string &s, int start, vector<int>& dp) {
        if (start == s.size()) {
            return true;
        }

        if (dp[start] != -1) {
            return dp[start];
        }

        for (int end = start + 1; end <= s.size(); end++) {
            string word = s.substr(start, end - start);

            if (search(word) && solve(s, end, dp)) {
                return dp[start] = true;
            }
        }

        return dp[start] = false;
    }


    bool wordBreak(string s, vector<string>& wordDict) {
        for (int i = 0; i < wordDict.size(); i++) {
            insert(wordDict[i]);
        }

        vector<int> dp(s.size(), -1);

        return solve(s, 0, dp);

        // return solve(s, 0);
    }
};