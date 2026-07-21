class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            if(nums.size()==0){
                return {-1,-1};
            }
            auto it = find(nums.begin(), nums.end(), target);
            int first = it - nums.begin();
                if(first == nums.size()) {
                return {-1,-1};
            }
            // if(first == nums.size()-1){
            //     return {first,first};
            // }
            int second = first;    
            while(nums[second] == target && first != nums.size()) {
                second++;
                if(second ==  nums.size()){
                    break;
                }
            }
            
            return {first,second-1};
            }
};