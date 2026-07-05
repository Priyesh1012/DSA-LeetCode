class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;

        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]!=nums2[j]){
                    continue;
                }
                bool flag = true;
                for(int k = j;k<nums2.size()-1;k++){
                    if(nums1[i]<nums2[k+1]){
                        result.push_back(nums2[k+1]);
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    result.push_back(-1);
                }
            }
        }

        return result;

    }
};