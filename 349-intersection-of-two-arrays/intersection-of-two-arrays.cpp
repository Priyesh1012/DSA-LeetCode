class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        for(int i = 0;i<nums1.size();i++){
            if(ranges::contains(nums2 , nums1[i])){
                result.insert(nums1[i]);
            }
        }  
        vector<int> my_vec(result.begin(), result.end());
        return my_vec; 
    }
};