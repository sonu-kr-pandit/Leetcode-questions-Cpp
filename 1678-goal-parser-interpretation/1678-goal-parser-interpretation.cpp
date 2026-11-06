class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string s= "";
        for(int i = 0 ; i<n ; i++){
            if(command[i]== '(' && command[i+1] == ')'){
                s+= 'o';
            }else if (command[i] == 'G' || command[i] == 'a' || command[i] == 'l'  ){
                s+= command[i];
            }
        }
        return s;
        
    }
};