class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    int n = numRows; 

    vector<vector<int>> output(n);
        if(n>0){
            output[0] = {1};
        }
        if(n>1){
            output[1] = {1,1};
        }

        for(int i = 2;i<n;i++){
            for(int j = 0; j<=i ;j++){
                {   if(j==0 or j==i){
                        output[i].push_back(output[i-1][0]);
                    }
                    else{
                        output[i].push_back(output[i-1][j-1]+output[i-1][j]);
                    }
                }

            }
                
        }
        return output;
    }
};