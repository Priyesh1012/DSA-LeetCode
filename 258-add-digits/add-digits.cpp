class Solution {
public:
    int addDigits(int num) {
        int n = num;
        int ans = n;
        while(ans > 9){
            ans = calcu(ans);
        }
    return ans;
    }

    int calcu(int n){
        int ans = 0;
        while(n > 0){
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};