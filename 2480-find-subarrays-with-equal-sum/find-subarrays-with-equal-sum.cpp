class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
         unordered_map<int,int> mp;
        for(int i = 0; i<nums.size()-1;i++){
            mp[i] = nums[i]+nums[i+1];
        }
        for(int i = 0; i<mp.size()-1;i++){
            for(int j = i+1;j<mp.size();j++){
                if(mp[i]==mp[j]){
                    return true;
                    
                }
            }
        }
        return false;
    }
};