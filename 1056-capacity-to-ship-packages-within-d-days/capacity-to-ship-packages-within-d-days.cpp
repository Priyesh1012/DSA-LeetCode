class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        

        int low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(),weights.end(),0);
        int ans = 0;

        while(low <= high){

            int mid = (low + high)/2;

            int dayused = dayuseds(weights,mid);
            if(dayused > days){
                low = mid+1;
            }
            else{
                high = mid - 1;
                ans = mid;
            }

        }
        
    
        return ans;
    }

    int dayuseds(vector<int>& w,int c){
        int day = 1;
        int sum = 0;
        for(int i = 0; i<w.size();i++){
            
            if(sum + w[i] > c){
                day++;
                sum = w[i];
            }
            else{
                sum += w[i];
            }
            
        }
        return day;

    }

};