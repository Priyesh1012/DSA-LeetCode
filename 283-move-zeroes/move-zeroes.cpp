class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1;i++){
            bool swap = true;
            for(int j = 0; j < nums.size()-1;j++){
                if(nums[j]==0){
                    if(nums[j]<nums[j+1] || nums[j]>nums[j+1]){
                        int temp = nums[j];
                        nums[j]=nums[j+1];
                        nums[j+1]=temp;
                        swap = false;
                    }
                }
            }
            if(swap){
                break;
            }
        }
    }
};