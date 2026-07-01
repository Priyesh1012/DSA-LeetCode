class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        set<int,greater<int>> s(nums.begin(),nums.end());

        if(s.size()<=2){
            return *s.begin();
        }

        return *next(s.begin(),2);
    }
};