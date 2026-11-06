class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string spy = "";
        for(string it:words){
            spy+= it[0];
        }
        if(spy != s){
            return false;
        }
        return true;
        
    }
};