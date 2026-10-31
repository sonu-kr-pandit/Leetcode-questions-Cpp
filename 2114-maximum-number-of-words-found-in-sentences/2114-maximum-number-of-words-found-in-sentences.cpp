class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        for(string s : sentences){
            int lt = s.length();
            int cnt = 0;
            for(int i  = 0 ; i<lt ; i++){
                if(s[i] == ' '){
                    cnt++;
                }
            }
            cnt++;

            count = max(count , cnt);
        }
        return count;

        
    }
};