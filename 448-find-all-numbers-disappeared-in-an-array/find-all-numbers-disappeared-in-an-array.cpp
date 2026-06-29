class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
    set<int> s;
    for(int i = 0 ; i < nums.size();i++){
        s.insert(nums[i]);
    }
    int length = nums.size();
    vector<int> n;
    int count = 0;
    // if(*s.begin() == 1 && s.size()==1){
    //     n.push_back(2);
    // }
    int c = 0;
    for(auto i : s){
    
            while(true){
                count = count + 1;
                if(i>count){
                    c++;
                    n.push_back(count);
                }
                else{
                    break;
                }
            }
        c++;
    }
    int min = nums.size()-s.size();
    for(int i = 0 ;i <min;i++ ){
        if(c<length){
            count++;
            n.push_back(count);
            c++;
        }
    }

    return n;
    }
};