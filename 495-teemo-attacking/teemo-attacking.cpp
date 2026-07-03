class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int result = 0;
        for(int i = 0;i<timeSeries.size()-1;i++){
            if((timeSeries[i+1]-timeSeries[i]) < duration){
                result = result + (timeSeries[i+1]-timeSeries[i]);
            }
            else{
            result = result + duration;
            }
        }   
        result = result + duration;     
        return result;      

    }
};