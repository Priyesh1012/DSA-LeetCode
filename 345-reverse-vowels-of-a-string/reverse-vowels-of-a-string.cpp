class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
        int ssize = s.size()-1;
        for(int i = 0;i<s.size();i++){
            if(find(vowels.begin(), vowels.end(), s[i]) == vowels.end()){
                continue;
            }
            while(ssize>=0 && find(vowels.begin(), vowels.end(), s[ssize]) == vowels.end()){
                ssize--;
            }   
            if(ssize>=i){
            swap(s[i],s[ssize]);
            }
            else{
                break;
            }
            ssize--;
        
        }

        return s;
    }
};