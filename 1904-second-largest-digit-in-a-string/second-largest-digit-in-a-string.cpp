class Solution {
public:
    int secondHighest(string s) {
        int output = -1;
        int ind;
        int largest;
        for(int i = 0;i<s.size();i++){
            if(s[i] >= 48 && s[i] <= 57){
                largest = s[i] - '0';
                ind = i;
                break;
            }
        }
        for(int i = ind + 1;i<s.size();i++){
            if(s[i] >= 48 && s[i]<=57){
                if(largest < s[i] - '0'){
                    output = largest;    
                    largest = s[i] - '0';
                }
                if(largest > s[i] - '0' && s[i]-'0' > output){
                    output = s[i]-'0';
                }
            }
        }
        return output;

    }
};
