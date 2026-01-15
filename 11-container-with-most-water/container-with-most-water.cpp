class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int r = height.size()-1;
        int l = 0;
        int area =0;

        for(int i = 0;i<height.size();i++){
            int a = min(height[l],height[r])*(r-l);
            if(area<a){
                area = a;
            }
            if(height[l]<height[r]){
                l++;
            }
            else{r--;}
        }
    
    return area;


    }
};