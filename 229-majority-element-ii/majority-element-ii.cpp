class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int> vt;
        if((nums.size()/3) == 0){
            if(nums.size()>1){
            int i = 0;
            while (i < nums.size()) {
                if(find(vt.begin(), vt.end(), nums[i]) !=   vt.end()){
                    i++;
                }
                else{
                    vt.push_back(nums[i]);
                    i++;
                }
                
            }
            return vt;
            }
            else{return nums;}
        }
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        } 

        for(auto i:mp){
            if(i.second > (nums.size()/3)){
                vt.push_back(i.first);
            }
        }    
        return vt;
        
    }
};