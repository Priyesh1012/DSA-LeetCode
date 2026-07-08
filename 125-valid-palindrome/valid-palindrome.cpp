class Solution {
public:
    bool isPalindrome(string s) {
        int ind = s.size()-1;
        bool flag = false;
        int count = 0;
        
        for(int i = 0;i<s.size();i++){
            if(ind<=i){
                break;
            }
            if (!isalnum(s[i])) {
                continue;
            }
            count++;
            while(ind >= 0 && !isalnum(s[ind])){
                ind--;
            }
            if(tolower(s[i]) == tolower(s[ind])){
                
                flag = true;
            }
            else{
                return false;
            }
            ind--;
        }
        if(count<2){
            return true;
        }
    return flag;
    }
};