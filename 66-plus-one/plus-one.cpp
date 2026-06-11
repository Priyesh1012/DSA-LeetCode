class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1;i>=0;i++){
            if(digits[i] < 9){
                digits[i] = digits[i] + 1;
                break;
            }
            else{
                if(i == 0){
                    digits[i] = 0;
                }
                int j = i;
                bool flag;
                while(j != 0){
                    flag = false;
                        digits[j] = 0;
                        if(digits[j-1] != 9){
                            digits[j-1] = digits[j-1] +1;
                            break;
                        }
                        else{
                            digits[j-1] = 0;
                            flag = true;
                        }
                    j = j-1;
                }
                if(flag){
                    digits.insert(digits.begin(), 1);
                }
                break;
            }
        }
        return digits;
    }
};