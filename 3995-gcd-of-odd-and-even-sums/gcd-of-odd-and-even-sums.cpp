class Solution {
public:
    int gcdOfOddEvenSums(int n) {
    int o = 1 , e =2;
    int soof= 1;
    int soef = 2;
    for(int i = 1;i<n;i++){
        o = o + 2;
        soof = soof + o;
        e = e + 2;
        soef = soef + e;
    } 
    cout<<soof<<" "<<soef<<endl;

    int m = max(soef,soof);
    int ans = 1;
    for(int i = 1; i<=m;i++){
        if(soof%i==0 && soef%i==0){
            ans = i;
        }
    }
    return ans;
    
    }
};