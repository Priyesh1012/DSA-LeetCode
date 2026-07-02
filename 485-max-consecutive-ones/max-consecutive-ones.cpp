class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int result = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
            }
            if(nums[i]==0){
                if(count>result){
                    result = count;
                }
                count = 0;
            }

        }
         if(count>result){
                    result = count;
                }
        return result;
    }
};