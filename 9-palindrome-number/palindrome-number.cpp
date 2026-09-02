class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;
        
        long long num = x;
        long long reversedNum = 0;
        
        while (num > 0) {
            int lastDigit = num % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            num /= 10;
        }
        
        return reversedNum == x;
    }
};
