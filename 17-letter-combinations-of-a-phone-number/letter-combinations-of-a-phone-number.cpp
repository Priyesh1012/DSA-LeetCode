class Solution {
private:
    const vector<string> mapping = {
        "",     "",     "abc",  "def",  // 0, 1, 2, 3
        "ghi",  "jkl",  "mno",          // 4, 5, 6
        "pqrs", "tuv",  "wxyz"          // 7, 8, 9
    };

    void backtrack(const string& digits, int index, string& current, vector<string>& result) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, index + 1, current, result);
            current.pop_back(); // Backtrack
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result;
        }
        
        string current = "";
        backtrack(digits, 0, current, result);
        return result;
    }
};
