class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int,int> check;
        for(int i =0;i<nums.size();i++){
            check[nums[i]] = check[nums[i]] + 1;
        }
        
        for(auto i : check){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};