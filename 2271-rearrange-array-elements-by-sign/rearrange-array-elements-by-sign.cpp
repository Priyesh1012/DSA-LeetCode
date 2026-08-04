class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int pos = 0;
        int nag = 1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]>=0){
                ans[pos] = nums[i];
                pos += 2;
            }
            else{
                ans[nag] = nums[i];
                nag += 2;
            }

        }
        return ans;

    }
};