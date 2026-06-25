class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int key = nums[0];
        bool ret = true;
        for(int i = 0;i<nums.size();i++){
            ret = true;
            for(int j = 0;j<nums.size();j++){
                if(key == nums[j] && j!=i){
                    ret = false;
                    key = nums[i+1];
                }
            }
            if(ret){
                return nums[i];
            }
        } 
        return(nums[0]);
    }
};