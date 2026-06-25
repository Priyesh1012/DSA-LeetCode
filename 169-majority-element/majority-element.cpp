class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int,int> count;
        for(int i = 0; i<nums.size();i++){
            count[nums[i]] = count[nums[i]] + 1;
        }

    int maxValue = INT_MIN;
    int maxKey = INT_MIN;

    for (auto it : count) {
        if (it.second > maxValue) {
            maxValue = it.second;
            maxKey = it.first;
        }
        else if (it.second == maxValue && it.first > maxKey) {
            maxKey = it.first;
        }
    }
    return maxKey;
    }
};