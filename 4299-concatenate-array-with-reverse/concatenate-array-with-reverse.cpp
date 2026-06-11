class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int max = nums.size()-1;

        while(max >=0){
            nums.insert(nums.end(), nums[max]);
            max--;
        }
        return nums;
    }
};