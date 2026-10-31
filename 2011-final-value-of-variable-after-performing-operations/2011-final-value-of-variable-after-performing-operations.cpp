class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string ch : operations){
            if(ch == "++X" || ch == "X++"){
                x = x+1;

            }else if(ch == "--X" || ch == "X--"){
                x = x-1;
            }
        }
        return x;
        
    }
};