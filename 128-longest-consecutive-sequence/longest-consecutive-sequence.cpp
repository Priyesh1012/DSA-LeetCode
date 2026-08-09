class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    if(nums.size() == 0){
        cout<<0;
        return 0;
    }
    unordered_set<int> s;
    for(int i = 0; i<nums.size();i++){
        s.insert(nums[i]);
    }

    int ans = 1;
    for(auto it : s){
        if(s.find(it - 1) == s.end()){
            
            int x = it;
            int curr = 1; 
            while(s.find(x+1) != s.end()){
                curr++;
                x++;
            }
            ans = max(ans, curr);
        }
        else{
            continue;
        }
       
    }

    return ans;
    }
};