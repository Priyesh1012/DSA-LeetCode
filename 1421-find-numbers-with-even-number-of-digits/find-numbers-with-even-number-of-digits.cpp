class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;

        for(int i = 0;i<nums.size();i++){
            int count = 0;
            while(nums[i]>0){
                nums[i] = nums[i]/10;
                count = count + 1;
            }
            if(count%2==0){
                res = res +1;
            }
        }
        return res;

    }
};