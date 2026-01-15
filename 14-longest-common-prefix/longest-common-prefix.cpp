class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string ans = "";
    
    int small = strs[0].size();
    for (int i = 1; i < strs.size(); i++) {
        small = min(small, (int)strs[i].size());
    }

    for (int j = 0; j < small; j++) {
        char c = strs[0][j];   
        for (int k = 1; k < strs.size(); k++) {
            if (strs[k][j] != c) {
                return ans;  
            }
        }

        ans += c;  
    }

    return ans;
}

};