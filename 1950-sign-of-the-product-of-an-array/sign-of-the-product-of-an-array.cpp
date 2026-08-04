class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        int pos = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                return 0;
            }
            if(nums[i]<=0){
                ans *= nums[i];
                if(ans > 0){
                    pos = 1; 
                    ans = 1;
                }
                else if(ans < 0){
                    pos = -1;
                    ans = -1;
                }
                else{return 0;}
            }
        }
        return pos;
    }
};